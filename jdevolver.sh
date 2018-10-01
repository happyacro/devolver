#!/bin/bash

# jdevolver.sh - a script to repeatedly convert a jpeg file, 
# 	progressively turning it into garbage
#
# USAGE: jdevolver.sh  [JPEG FILE] [ITERATION COUNT] [QUALITY]
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


JPG_FILE=${1}
ITERATION_COUNT=${2}
QUALITY=${3}

if [ -z "${1}" -o -z "${2}" ]; then
	echo "USAGE: ${0} [JPEG FILE] [ITERATION COUNT] "
	exit 1
fi

echo "Welcome to jdevolver. This is a terrible idea. Why are you doing this?"
echo ""
echo "Input file: ${JPG_FILE}"
echo "Iteration Count: ${ITERATION_COUNT}"
echo ""

function do_the_magic() {
	INPUT_FILE="${1}"
	OUTPUT_FILE="${2}"

	convert -quality 100 "${INPUT_FILE}" "${OUTPUT_FILE}.tmp"
	mv "${OUTPUT_FILE}.tmp" "${OUTPUT_FILE}"
	ERROR_CODE=${?}
	if [ 1 = ${ERROR_CODE} ]; then
		echo "imagemagick exited with an error code of ${?}, stopping."
		exit 1
	fi

	LOOPCOUNTER=0
	while [ ${LOOPCOUNTER} -lt 10 ]; do
		CURRENTQUALITY=$((50 + RANDOM % 30))
		echo -n "${LOOPCOUNTER} "
		convert -quality ${CURRENTQUALITY} "${OUTPUT_FILE}" "${OUTPUT_FILE}.tmp"
		mv "${OUTPUT_FILE}.tmp" "${OUTPUT_FILE}"
		ERROR_CODE=${?}
		if [ 1 = ${ERROR_CODE} ]; then
			echo "imagemagick exited with an error code of ${?}, stopping."
			exit 1
		fi
		let LOOPCOUNTER=LOOPCOUNTER+1
	done

	echo ""	

	report_on_file "${OUTPUT_FILE}"		
}

COUNTER=0
CURRENT_FILE="${JPG_FILE}"
while [  ${COUNTER} -lt ${ITERATION_COUNT} ]; do
	let FILE_COUNTER=COUNTER+100000
	OUTPUT_FILE="`basename ${JPG_FILE} .jpg`${FILE_COUNTER}.jpg"	
	echo "Running iteration #${COUNTER}, current file: ${CURRENT_FILE}, output file: ${OUTPUT_FILE}"
	do_the_magic "${CURRENT_FILE}" "${OUTPUT_FILE}"	
	CURRENT_FILE="${OUTPUT_FILE}"
	let COUNTER=COUNTER+1
done

echo "Final file: ${OUTPUT_FILE}"
echo ""

echo "Creating movie file: out.mp4"

rm out30.mp4
rm out60.mp4
rm out120.mp4

ffmpeg -framerate 30 -pattern_type glob -i '*.jpg' -vf "scale=trunc(iw/2)*2:trunc(ih/2)*2" out30.mp4
ffmpeg -framerate 60 -pattern_type glob -i '*.jpg' -vf "scale=trunc(iw/2)*2:trunc(ih/2)*2" out60.mp4
ffmpeg -framerate 120 -pattern_type glob -i '*.jpg' -vf "scale=trunc(iw/2)*2:trunc(ih/2)*2" out120.mp4

echo "Removing temp output files"
COUNTER=0
CURRENT_FILE="${JPG_FILE}"
while [  ${COUNTER} -lt ${ITERATION_COUNT} ]; do
	let FILE_COUNTER=COUNTER+100000
	OUTPUT_FILE="`basename ${JPG_FILE} .jpg`${FILE_COUNTER}.jpg"	
	rm "${OUTPUT_FILE}"
	let COUNTER=COUNTER+1
done

exit 0
