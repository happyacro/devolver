#!/bin/bash

API_KEY=${1}
ITERATION_COUNT=${2}
C_FILE=${3}

echo "Welcome to cdevolver, why are you doing this?"
echo ""
echo "API Key: ${API_KEY}"
echo "Iteration Count: ${ITERATION_COUNT}"
echo "Input file: ${C_FILE}"
echo ""

function do_the_magic() {
	INPUT_FILE=${1}
	OUTPUT_FILE=${2}
	BINARY_FILE=`basename "${OUTPUT_FILE}" .c`
	
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
	fi
}

do_the_magic happyacro.c happyacro2.c