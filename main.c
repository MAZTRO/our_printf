#include "holberton.h"
#include <stdio.h>

int main(void)
{

int number = -101024, x = 0;
char c = 'z';
int alen, elen;
char *str = "hello, world";

printf("=====================\n");
printf("*****CHAR*****\n");
printf("=====================\n");
printf("Expected   : %cAAA\n", 'a');
_printf("Actual     : %cAAA\n", 'a');
elen = printf("Expected   : %c\n", c);
alen = _printf("Actual     : %c\n", c);
printf("Expected   : %i\n", elen);
printf("Actual     : %i\n", alen);
elen = printf(NULL);
alen = _printf(NULL);
printf("Expected   : %i\n", elen);
printf("Actual     : %i\n", alen);
printf("Expected   : %cc\n", 'a');
_printf("Actual     : %cc\n", 'a');
printf("Expected   : %yd\n");
_printf("Actual     : %yd\n");
printf("Expected   : %c\n", 53);
_printf("Actual     : %c\n", 53);
printf("Expected   : %c\n", '\0');
_printf("Actual     : %c\n", '\0');
printf("Expected   : %%%c\n", 'y');
_printf("Actual     : %%%c\n", 'y');

//strings
printf("=====================\n");
printf("*****STRINGS*****\n");
printf("=====================\n");

alen = elen = 0;
printf("Expected   : %s\n", "holberton");
_printf("Actual     : %s\n", "holberton");
printf("Expected   : %s$\n", "");
_printf("Actual     : %s$\n", "");
elen = printf("Expected   : %s\n", str);
alen = _printf("Actual     : %s\n", str);
printf("Expected   : %s$\n", NULL);
_printf("Actual     : %s$\n", NULL);
printf("Expected   : %i\n", elen);
printf("Actual     : %i\n", alen);
printf("Expected   : %sschool\n", "holberton");
_printf("Actual     : %sschool\n", "holberton");

//%%
alen = elen = 0;
printf("=====================\n");
printf("*****PERCENT*****\n");
printf("=====================\n");
elen = printf("Expected   : %%\n");
alen = _printf("Actual     : %%\n");
printf("Expected   : %i\n", elen);
_printf("Actual     : %i\n", alen);
elen = printf("Expected   : %%%%\n");
alen = _printf("Actual     : %%%%\n");
printf("Expected   : %i\n", elen);
_printf("Actual     : %i\n", alen);

x = _printf("%d\n", number);
_printf("%d\n", x);
printf("\n");

return (0);
}
