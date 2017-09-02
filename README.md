# devolver

A collections of scripts that progressively turn meaning into garbage.

# what?

It's two bash scripts, duh: 

 - cdevolver.sh - take a bit of code written in C, compile it, then decompile it, then compile/decompile/compile/decompile over and over again, repeatedly.
 - jdevolver.sh - take a jpeg image, and save it as a new jpeg image with further compression, repeatedly, then turn it into an animation

## cdevolver

Usage Instructions:

### STEP 1: Acquire a RetDec API Key

cdevolver.sh requires a free api-key from [Retargetable Decompiler](https://retdec.com/) (aka RetDec), because cdevolver uses their service for decompilation. Check the RetDec website out, even if you won't be using their web service. You can upload and decompile your C binary within your browser for free without registering or acquiring an api key.

P.S. There are a bunch of other freeware and commercial disassemblers and decompilers out there that work on a variety of platforms. RetDec was the first decompiler I found that spit out recompilable code reliably over multiple generations (although my simple hello world c file seg faults after the first recompilation..). There's a great list of decompilers and disassemblers [here](https://en.wikibooks.org/wiki/X86_Disassembly/Disassemblers_and_Decompilers). 

### STEP 2: Download retdec-sh

cdevolver.sh also makes use of a third-party bash script to call RetDec's decompliation web service, so go download [retdec-sh](https://github.com/s3rvac/retdec-sh). There are a number of other clients for the RetDec api in a variety of languages. Check those out [here](https://retdec.com/api/).

### STEP 3: Download devolver

Devolver can be acquired from [here](https://github.com/happyacro/devolver). 

### STEP 4: Put everything in place

1. Make a temporary directory, lets call it `${STUPID_DIRECTORY}`.
2. Copy `decompiler.sh` from your retdec-sh installation to `${STUPID_DIRECTORY}`.
3. Copy `cdevolver.sh` from your devolver installation to `${STUPID_DIRECTORY}`. 
4. Copy your C file to `${STUPID_DIRECTORY}`.

### STEP 5: Make your C file

You don't even have a C file yet, do you? Well, make one. Or just use my dumb example happyacro.c included with devolver. Or just copy paste it from here:

	#include <stdio.h>

	int main (void) {
  		printf ("HAPPY:/ACRO\n");
  		return 0;
	}

### STEP 6: Make sure your C file compiles with GCC

1. Install GCC if you don't already have it. Pro tip: If you're on OSX, you get it for free when you install [XCode](https://stackoverflow.com/questions/9353444/how-to-use-install-gcc-on-mac-os-x-10-8-xcode-4-4). On Windows, you're gonna need [cygwin](http://preshing.com/20141108/how-to-install-the-latest-gcc-on-windows/) to execute cdevolver.sh, and you can get GCC via cygwin as well. 

2. Run `gcc yourfile.c -o yourdumbprogram` in a terminal / command line window.

3. Execute your program (`yourdumbprogram`) in your terminal window. Does it run? Fix it until it does.

### STEP 7: Run cdevolver.sh

You're going to execute something like this in a terminal window from `${STUPID_DIRECTORY}`: 

	./cdevolver.sh [RETDEC_API_KEY] [ITERATION_COUNT] [C_FILE_NAME]

Here `ITERATION_COUNT` is how many times you want to compile/decompile the code as it gets progressively worse, `RET_DEC_API_KEY` is your RetDec API key, and unsurprisingly `C_FILE_NAME` is the name of, you guessed it, your input C file.

Example:

	./cdevolver.sh SOME_RANDOM_KEY_XYZ 35 yourfile.c

# jdevolver

```js

'IMPORTANT NOTE: 

'/*
This script doesn't seem to work, the images degrade a very tiny amount within the first 10 iterations, but no further.

If you figure out a ImageMagick trick that I haven't, lmk. 

I have tried:

	* Converting the files to an intermediary format such as BMP that doesn't create compression, in an attempt to trick ImageMagick into recompressing again.

	* Scaling to 10%, then 1000%.

	* Adding random noise very slightly.

	* Adding a very slight gaussian blur.

	* Very low quality levels (like, 5).

*/

```

jdevolver makes use of [ImageMagick](https://www.imagemagick.org/script/index.php), so install that. You can easily install it with [Homebrew](https://brew.sh/) on OSX. 

You will also need to install [FFmpeg](https://www.ffmpeg.org/), which can also be obtained for OSX simply with [Homebrew](https://brew.sh/).

If you don't have bash installed on your system (windows users..), go get and install [Cygwin](http://im.snibgo.com/cygwin.htm).

Note that the script is going to create a bunch of jpeg files in the same directory as the original, so I recommend making a temp directory and copying your original there.

Running the script is easy: 

	./jdevolver.sh [YOUR_IMAGE_FILE] [ITERATION_COUNT] [QUALITY]

Here `ITERATION_COUNT` is how many times you want to run the converter, and `QUALITY` is a number from 1 to 100 signifying JPEG compression quality level. It's fun to peg this at 100 and still see the images degrade over time. 

Example: 

	./jdevolver.sh temp/happyacrologo.jpg 30 100

# purpose

These scripts were used to generate some shitty jokes for a [book](http://www.happyacro.com).

# license

All scripts are licensed with the [Apache license](http://en.wikipedia.org/wiki/Apache_license), which is a great license because, essentially it:

* a) covers liability - my code should work, but I'm not liable if you do something stupid with it
* b) allows you to copy, fork, and use the code, even commercially
* c) is [non-viral](http://en.wikipedia.org/wiki/Viral_license), that is, your derivative code doesn't *have to be* open source to use it

Other great licensing options for your own code: [BSD License](https://en.wikipedia.org/wiki/BSD_licenses), [MIT License](https://en.wikipedia.org/wiki/MIT_License), or [Creative Commons](https://en.wikipedia.org/wiki/Creative_Commons_license).

Here's the license:

Copyright (c) 2017, Coder Cowboy, LLC. All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
* 1. Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.
* 2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.
  
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  
The views and conclusions contained in the software and documentation are those
of the authors and should not be interpreted as representing official policies,
either expressed or implied.

