#!/bin/bash
#/*
# * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
# * contributor license agreements.  See the NOTICE file distributed with
# * this work for additional information regarding copyright ownership.
# * The OpenAirInterface Software Alliance licenses this file to You under
# * the OAI Public License, Version 1.1  (the "License"); you may not use this file
# * except in compliance with the License.
# * You may obtain a copy of the License at
# *
# *      http://www.openairinterface.org/?page_id=698
# *
# * Unless required by applicable law or agreed to in writing, software
# * distributed under the License is distributed on an "AS IS" BASIS,
# * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# * See the License for the specific language governing permissions and
# * limitations under the License.
# *-------------------------------------------------------------------------------
# * For more information about the OpenAirInterface (OAI) Software Alliance:
# *      contact@openairinterface.org
# */

function usage {
    echo "OAI Coding / Formatting Guideline Check script"
    echo "   Original Author: Raphael Defosseux"
    echo ""
    echo "   Requirement: astyle shall be installed"
    echo ""
    echo "   By default (no options) the complete repository will be checked"
    echo "   In case of merge request, provided source and target branch,"
    echo "   the script will check only the modified files"
    echo ""
    echo "Usage:"
    echo "------"
    echo "    checkCodingFormattingRules.sh [OPTIONS]"
    echo ""
    echo "Options:"
    echo "--------"
    echo "    --src-branch #### OR -sb ####"
    echo "    Specify the source branch of the merge request."
    echo ""
    echo "    --target-branch #### OR -tb ####"
    echo "    Specify the target branch of the merge request (usually develop)."
    echo ""
    echo "    --help OR -h"
    echo "    Print this help message."
    echo ""
}

if [ $# -ne 4 ] && [ $# -ne 1 ] && [ $# -ne 0 ]
then
    echo "Syntax Error: not the correct number of arguments"
    echo ""
    usage
    exit 1
fi

if [ $# -eq 0 ]
then
    echo " ---- Checking the whole repository ----"
    echo ""
    NB_FILES_TO_FORMAT=`astyle --dry-run --options=ci-scripts/astyle-options.txt --recursive *.c *.h | grep -c Formatted `
    echo "Nb Files that do NOT follow OAI rules: $NB_FILES_TO_FORMAT"
    echo $NB_FILES_TO_FORMAT > ./oai_rules_result.txt
    exit 0
fi

checker=0
while [[ $# -gt 0 ]]
do
key="$1"

case $key in
    -h|--help)
    shift
    usage
    exit 0
    ;;
    -sb|--src-branch)
    SOURCE_BRANCH="$2"
    let "checker|=0x1"
    shift
    shift
    ;;
    -tb|--target-branch)
    TARGET_BRANCH="$2"
    let "checker|=0x2"
    shift
    shift
    ;;
    *)
    echo "Syntax Error: unknown option: $key"
    echo ""
    usage
    exit 1
esac

done


if [ $checker -ne 3 ]
then
    echo "Source Branch is    : $SOURCE_BRANCH"
    echo "Target Branch is    : $TARGET_BRANCH"
    echo ""
    echo "Syntax Error: missing option"
    echo ""
    usage
    exit 1
fi

# Merge request scenario

MERGE_COMMMIT=`git log -n1 | grep commit | sed -e "s@commit @@"`
TARGET_INIT_COMMIT=`cat .git/refs/remotes/origin/$TARGET_BRANCH`

echo " ---- Checking the modified files by the merge request ----"
echo ""
echo "Source Branch is    : $SOURCE_BRANCH"
echo "Target Branch is    : $TARGET_BRANCH"
echo "Merged Commit is    : $MERGE_COMMMIT"
echo "Target Init   is    : $TARGET_INIT_COMMIT"
echo ""
echo " ----------------------------------------------------------"
echo ""

# Retrieve the list of modified files since the latest develop commit
MODIFIED_FILES=`git log $TARGET_INIT_COMMIT..$MERGE_COMMMIT --oneline --name-status | egrep "^M|^A" | sed -e "s@^M\t*@@" -e "s@^A\t*@@" | sort | uniq`
NB_TO_FORMAT=0
if [ -f oai_rules_result_list.txt ]
then
    rm -f oai_rules_result_list.txt
fi
for FULLFILE in $MODIFIED_FILES
do
    filename=$(basename -- "$FULLFILE")
    EXT="${filename##*.}"
    if [ $EXT = "c" ] || [ $EXT = "h" ] || [ $EXT = "cpp" ] || [ $EXT = "hpp" ]
    then
        TO_FORMAT=`astyle --dry-run --options=ci-scripts/astyle-options.txt $FULLFILE | grep -c Formatted `
        NB_TO_FORMAT=$((NB_TO_FORMAT + TO_FORMAT))
        if [ $TO_FORMAT -ne 0 ]
        then
            echo $FULLFILE
            echo $FULLFILE >> ./oai_rules_result_list.txt
        fi
    fi
done
echo ""
echo " ----------------------------------------------------------"
echo "Nb Files that do NOT follow OAI rules: $NB_TO_FORMAT"
echo $NB_TO_FORMAT > ./oai_rules_result.txt

exit 0
