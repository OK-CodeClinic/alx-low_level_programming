
# C - FILE I/O

* In this project, I learned how about;
1. File discriptors and there POSIX names
2. Different between functions and system calls
3. Standard Structure and Symbolic Constants
4. Standard input and output.

* I practice using;
1. The  I/O system calls open, close, read, and write
2. The flags O_RDONLY, WR_ONLY, and O_RDWR to create, open, close, read, write, set permissions of files in C

## Author

- [Kehinde Omokungbe](https://www.github.com/OK-CodeClinic)

## Documentation
All projects must obey the;

[ALX Betty Documentation](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
and 
[ALX Betty Style](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl)

## Requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- Allowed syscalls: read, write, open, close
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
- Don’t forget to push your header file
- All your header files should be include guarded
- Tip: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance read(STDIN_FILENO, ... vs read(0, ...
![Logo](data:image/png;base64,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)


