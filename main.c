#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
 /*   // NULL
printf(NULL);
_printf(NULL);
printf("START OF TEST\n");*/

char c = 'z';
int alen, elen;
printf("CHAR\n");
 printf("Expected   : %cAAA\n", 'a');
_printf("Actual     : %cAAA\n", 'a');
elen =  printf("Expected   : %c\n", c);
alen = _printf("Actual     : %c\n", c);
printf("Expected   : %i\n", elen);
printf("Actual     : %i\n", alen);
//elen = printf(NULL);
//alen = _printf(NULL);
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
_printf("Actual     : %%%c\n\n", 'y');

//strings
printf("STRINGS\n");
char *str = "hello, world";
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
_printf("Actual     : %sschool\n\n", "holberton");

alen = elen = 0;
printf("PERCENT\n");
printf("%%%%            %%%c\n", 'H');
printf("%%%% %%%    \\       c\n", 'H');
printf("%%%% %%%           c\n", 'H');
elen = printf("Expected   : %%\n");
alen = _printf("Actual     : %%\n");
printf("Expected   : %i\n", alen);
printf("Actual     : %i\n", elen);
elen = printf("Expected   : %%%%\n");
alen = _printf("Actual     : %%%%\n");
printf("Expected   : %i\n", elen);
printf("Actual     : %i\n", alen);
printf("Expected   :");
printf("%");
printf("\n");
printf("Actual     :");
_printf("%");
printf("\n");

    return (0);
}
