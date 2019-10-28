#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len = 0;
    char lol[] = "I am a string !";

    _printf("Character:[%c %%%%% %s]\n", 'H', lol);

	_printf("lolol %s %c %%%%\n", lol, 'a');
    len = _printf("String:[%s]\n", lol);
    _printf("String:[%s]\n", "I am a string !");
    _printf("Len:[%d]\n", len);
	_printf("%%%        %%       %%%%");
    return (0);
}
