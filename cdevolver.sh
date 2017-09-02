#!/bin/bash

# cdevolver.sh - a script to repeatedly compile and decompile a c file, 
# 	progressively turning it into garbage
#
# USAGE: cdevolver.sh  [API KEY] [ITERATION COUNT] [C FILE]
# 
# This script is from here: https://github.com/happyacro/devolver
#
# The script was written to generate a joke for a book called HAPPY:/ACRO.
#
# License: Apache License (https://en.wikipedia.org/wiki/Apache_License)
#
# Copyright (c) 2017, Coder Cowboy, LLC. All rights reserved.
# 
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
# * 1. Redistributions of source code must retain the above copyright notice, this
# list of conditions and the following disclaimer.
# * 2. Redistributions in binary form must reproduce the above copyright notice,
# this list of conditions and the following disclaimer in the documentation
# and/or other materials provided with the distribution.
#   
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
# ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
# WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
# DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
# ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
# (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
# LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
# ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
# SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#   
# The views and conclusions contained in the software and documentation are those
# of the authors and should not be interpreted as representing official policies,
# either expressed or implied.


API_KEY=${1}
ITERATION_COUNT=${2}
C_FILE=${3}

if [ -z "${1}" -o -z "${2}" -o -z "${3}" ]; then
	echo "USAGE: ${0} [API KEY] [ITERATION COUNT] [C FILE]"
	exit 1
fi

echo "Welcome to cdevolver, why are you doing this?"
echo ""
echo "API Key: ${API_KEY}"
echo "Iteration Count: ${ITERATION_COUNT}"
echo "Input file: ${C_FILE}"
echo ""

function report_on_file() {
	FILE="${1}"
	FILE_SIZE=`cat "${FILE}" | wc -c | sed 's/.*[^\0-9]//'`
	LINE_COUNT=`cat "${FILE}" | wc -l | sed 's/.*[^\0-9]//'`
	echo "${FILE} is ${FILE_SIZE} bytes and ${LINE_COUNT} lines."
}

function do_the_magic() {
	INPUT_FILE="${1}"
	OUTPUT_FILE="${2}"
	BINARY_FILE=`basename "${OUTPUT_FILE}" .c`

	report_on_file "${INPUT_FILE}"
	
	echo "Compiling ${INPUT_FILE} to ${BINARY_FILE}"
	gcc -m32 "${INPUT_FILE}" -o "${BINARY_FILE}"
	if [ 1 = ${?} ]; then
		echo "Couldn't compile ${INPUT_FILE}, stopping."
		exit 1
	fi
	
	echo "Attempting to run ${BINARY_FILE}"
	./"${BINARY_FILE}"
	ERROR_CODE=${?}
	if [ 1 = ${ERROR_CODE} ]; then
		echo "${BINARY_FILE} exited with an error code of ${?}, continuing anyway"
	fi

	echo "Calling RetDec (http://www.retdec.com) to decompile ${BINARY_FILE}"
	./decompiler.sh -k ${API_KEY} ./"${BINARY_FILE}"
	if [ 1 = ${?} ]; then
		echo "Couldn't decompile ${BINARY_FILE}, stopping."
		exit 1
	fi

	if [ ! -e "${OUTPUT_FILE}" ]; then
		echo "Strange, decompile script didn't exit with error, but expected output file '${OUTPUT_FILE}' doesn't exist? Stopping."
		exit 1
	else
		echo "${BINARY_FILE} was decompiled to ${OUTPUT_FILE}"
		report_on_file "${OUTPUT_FILE}"
	fi
}

COUNTER=0
CURRENT_FILE="${C_FILE}"
while [  ${COUNTER} -lt ${ITERATION_COUNT} ]; do
	OUTPUT_FILE="`basename ${C_FILE} .c`${COUNTER}.c"	
	echo "Running iteration #${COUNTER}, current file: ${CURRENT_FILE}, output file: ${OUTPUT_FILE}"
	do_the_magic "${CURRENT_FILE}" "${OUTPUT_FILE}"	
	CURRENT_FILE="${OUTPUT_FILE}"
	let COUNTER=COUNTER+1
	echo "Finished iteration #${COUNTER}, sleeping for 60s"
	echo ""
	sleep 60 
done

echo "Final file: ${OUTPUT_FILE}"
report_on_file "${OUTPUT_FILE}"
echo ""

echo "File contents: "
cat "${OUTPUT_FILE}"
echo ""

exit 0
