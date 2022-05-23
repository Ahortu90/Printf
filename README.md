# _Printf Project
Creating our printf function that produces output according to a format.
<hr>

- This repository includes our version of the printf function, the basic and main functions. Here we will apply the knowledge that we have acquired during the learning of the programming language C.
- This project is requested by ALx(https://alx-intran.hbtn.io)
---------------
**Description**
================
The printf function prints a format control string of different data types on the standard output, its roots are in the C programming language, it is a functional way to produce a precise output format for printing numerical values or ASCII characters from format specifiers that have been passed on in the argument.

**Prototype**
=================
This _printf function produces output according to a format:

    int _printf(const char *format, ...);

**Formats**
=================
|flag|function|
|--|--|
|%c|print a single character|
|%s|print a string|
|%i|print same as "d", integer in base 10|

**Compilation**
====================
To compile a file with the function is necessary to add all the .c files involved in the program (functions, main files, etc). Your code will be compiled this way:

    gcc -Wall -Werror -Wextra -pedantic *.c -o name_of_executable

To execute: `./name_of_executable`

**Files Description**
======

The _printf function produces output according to a format:

|file|description|
|--|--|
|*main.h*|Contain the struct and prototypes to the _printf function|
|*man_3_printf*|Contain the man page of the _printf function with all its specifications|
|*_printf.c*|find the correct function for the format for _printf
|*_putchar.c*|function that finds a character to print with _printf format
|*print_bin.c*|Contain the function that prints int to binary
|*print_char.c*|Contain the function that prints character
|*print_cus.c*|Contain the function that print custom specifier
|*print_dec.c*|Contain the function that prints decimal
|*print_hex.c*|Contain the function that prints an unsigned int in hexidecimal form
|*print_int.c*|Contain the function that prints integers
|*print_octal.c*|Contain the function that prints octal
|*print_rev.c*|Contain the function that prints reverse of strings
|*print_rot13.c*|Contain the function that prints the rot13'ed string
|*print_string.c*|Caontain the function that prints string
|*print_unsigned.c*|Contain the function that prints unsigned
|*print_pointer.c*| Contains the function that prints pointer

**Contributing**
====================
This is a project for  [ALx Africa](https://www.Alx.com/)  by ALX Africa Software Engineering Students.
Pull requests are welcome, if you find a bug, you can report us at the email: ahortuderrick0@gmail.com or ahortuvictorduncan@gmail.com
Please make sure to update tests as appropriate


**Authors**
=========
- [Ahortu Derrick](https://github.com/Ahortu90)
- [Ahortu Victor Duncan](https://github.com/victor-duncan).
