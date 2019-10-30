# Our Printf
### Medellin 2019
### Tomas Mejia
### Jonatan Mazo

## What is PRINTF?
*our version of PRINTF using in C programming languages, for build a sketch about of LINUX printf.

###_printf()
#include <stdlib.h> #include <stdarg.h> #include "holberton.h"

/** *_printf - our version of printf library function *@format: lengt *Return: contador * */

int _printf(const char *format, ...) { int ctdr1 = 0; va_list list;

va_start(list, format);

if (format == NULL)
	{
	return (-1);
	}
ctdr1 = _switches(format, list);
va_end(list);

return (ctdr1);
}

### Description
This Repo has the code for our function called _printf(). It is a test version of C Language function printf() from stdio.h librarie, and our function _printf() replicate the exact same process of some of the cases as the C function printf(). This project was completed as a part of the curriculum for Holberton School.

### Usage
The directory contents should be compiled with the following command:

$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c | _printf() function may be used, in any C language program. This is the prototype:

_printf(const char *[FORMAT], ...);

### Speacial Characaters
 - %c: print a singlecharacter
 - %d: print adecimal (base 10) number
 - %i: print aninteger in base 10
 - %s: print astring of characters
 - %%: print a percent sign (%also works)

### C language standard functions used
 - write.
 - switch.
 - va_start.
 - Va_end.
 - va_arg.
 