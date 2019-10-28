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

    _printf("Character:[%c]\n", 'H');

    len = _printf("String:[%s]\n", lol);
    _printf("String:[%s]\n", "I am a string !");
    _printf("Len:[%d]\n", len);

    return (0);
}
