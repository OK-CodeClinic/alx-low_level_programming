
# C - Bit manipulation

In this project, I learned how to manipulate bits and use the
bitwise operators `>>`, `<<`, `&`, `|`, and `^` in C.

## Tests :heavy_check_mark:

* [main.c](./main.c): Folder of test files. Provided by ALX School.

## Helper File :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [main.h](./main.h): Header file containing prototypes for all functions written in the project.

| File                   | Prototype                                                           |
| ---------------------- | ------------------------------------------------------------------- |
| `0-binary_to_uint.c`   | `unsigned int binary_to_uint(const char *b);`                       |
| `1-print_binary.c`     | `void print_binary(unsigned long int n);`                           |
| `2-get_bit.c`          | `int get_bit(unsigned long int n, unsigned int index);`             |
| `3-set_bit.c`          | `int set_bit(unsigned long int *n, unsigned int index);`            |
| `4-clear_bit.c`        | `int clear_bit(unsigned long int *n, unsigned int index);`          |
| `5-flip_bits.c`        | `unsigned int flip_bits(unsigned long int n, unsigned long int m);` |
| `100-get_endianness.c` | `int get_endianness(void);`|

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
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
- Don’t forget to push your header file
- All your header files should be include guarded

![Logo](data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAN0AAAB0CAMAAAA2CccOAAAAb1BMVEX///8SGBgAAAAQGBemqKgADQy2ubiJior19vZrbW38/PwNFBQACAgJERH4+fnx8vLn6OhmZ2dxcnLAwMErLi5zd3bT1NQYHR03ODnGx8jf4OCsrq5HSEhBQkPa2ttSVFNeYF97f34jJiaZmpqSkpP1wlCDAAAEPUlEQVR4nO2aiZKiMBCGoRFkEsIhCuJ4gb7/M264QgIo7k7NJOP2VzU1VRE1P93pCy0LQRAEQRAEQRAEQRAEQRAEQRAEQZD/F9L9vSVcWOilunfxbUSrE6x0b+KbOK+34L6puvOOa7Odd1QXpRcARm3bfkN12RXAbpHU8SATWaMgSogVRj+9vS/iAe3EOYq6Iv8cq7PC8hj9rrThufaMOisDgEmC2AFc4p/c3JeZUcetk20Dh9G0cUfBmpsZTnq2+Y/Mqisg4AuUW68XR0i4a84nnOJf5JxznllUQbPCqDdcWHYHFC6mhhbppvcuN1bHl4s86JYYeF0B6pd9ZDVY3pSpugx6ca28RvFOiKvlGRpaIl8QtisTz8yqQZztuHlz9taSOH7hyZSTF2Wr3anK831yS2MfBsr29Ym6qATHGaQwHlpC2XI2ZbYhRU14u+ZcicvcgP878o3TDli3V0w9M/wQCb6RV3mK5fhbP7Vq6gk/9yAZwnFhMMpDdTyC7KTrbIexgEpyGRen3TH5LuONFB/GPFJXU8tzHryPMRPckliHk+Jhf6HO8hN48DZmSCNxgMcGWFCnpDdVnCEBJd4/9spF21l1aJncG9qcORMIr/DEcMvqautNPsAUcdbqqVsuqmsj51gcM0RcvGeDP/F7DhCMIsyS7bj1Nqo8B7yZb9LBTdoYg2NSbi5U3euyunAUWSgU+hNdTXQZQgpUq9i3SFRclQSxrI5XKKq9WW7GODftIwKVC/obSDXHwrmro8okWzIzfPMu4l2wF600aUYHr9puN1cK9P2eXi5C3XC3SWhFRyFlQV24ns/mbmCA9WgfMV21j5aCzRN1pG55HhRxdWjRTCgOGOyUF7KX1A0zlDl5NNXsnJK6u/KC/5I6nseVloeO2jvNzhmKW99r6IiW1ZFxQKF0pfR7tm55ZFCXKF6UvqBulArqMMmrFmVJc0W2FSO7/UFe37zgmZntykrqxwmjhsjRPJBORDaHm0h3xDpvRfX55NwV4ApH7LuCMJGHFsfD3Jf+GCuxF/mQxBd5KPk4qhRi5jf4oGiIqP5p7dkR56R1rZrDVXavZxkhzd1aBqWsGxCRpmOgTnPVUfes1v8YhDB28WI/OpeVUn48zXdpUDunWlY2kzJqxCDaGw4YT1AAzR99WZ2VVoznObnu5HV184TraMBDBHJUenNnWnosVNEFBJPpF0mgDij6y2jr3J6Sxyz1CEU1TWphqTug9Ny/ODWyDmRsJGJF+s9cC9k8t95ybz7/sd+769dJ/nlaaz7N7MB9V3W1D3lbYI6tBM93UVdzuAO4tBltUV55wAtPuH4V8e1YsfZha74vU+nZa69OWvpt6rh7kkN6u6/Xt88sssj1oyfp0lnxMSwZMBH6EvKvAtqfaoT+5IcCbwDpUpf8ExZNW0EQBEEQBEEQBEEQBEEQBEEQBEEQw/kDbq0zG90BOFYAAAAASUVORK5CYII=)


