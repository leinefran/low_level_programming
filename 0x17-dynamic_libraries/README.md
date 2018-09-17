<img src="https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png" alt="Holberton logo">

0x17. C - Dynamic libraries


## Synopsis
This project is about Dynamics Libraries in C

### What students should learn from this project

At the end of this project we are expected to be able to explain to anyone, without the help of Google:
_ What is a dynamic library, how does it work, how to create one, and how to use it
_ What is the environment variable $LD_LIBRARY_PATH and how to use it
_ What are the differences between static and shared libraries
_ Basic usage nm, ldd, ldconfig

### Resources

_ https://www.youtube.com/watch?v=eW5he5uFBNM
_ https://www.geeksforgeeks.org/static-vs-dynamic-libraries/

### Project Requirements (for C)

_ Allowed editors: vi, vim, emacs
_ All your files will be compiled on Ubuntu 14.04 LTS
_ Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
_ All your files should end with a new line
_ A README.md file, at the root of the folder of the project is mandatory
_ Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
_ You are not allowed to use global variables
_ No more than 5 functions per file
_ You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
_ You are allowed to use _putchar
_ You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
_ In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
_ The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called holberton.h
_ Don’t forget to push your header file

### Project Requirements (for Bash)

_ Allowed editors: vi, vim, emacs
_ All your scripts will be tested on Ubuntu 14.04 LTS
_ All your files should end with a new line (why?)
_ The first line of all your files should be exactly #!/bin/bash
_ A README.md file, at the root of the folder of the project, describing what each script is doing
_ All your files must be executable


## Project Breakdown
File # | Task
---: | --- |
holberton.h | header file
libholberton.so | a dynamic library
1-create_dynamic_lib.sh | a script that creates a dynamic library called liball.so from all the .c files that are in the current directory

## Author
Leine Valente