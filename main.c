#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len = 0;

    _printf("Character:[%c]\n", 'H');
    _printf("Character:[%c]\n", 'g');
    //printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    //printf("String:[%s]\n", "I am a string !");

    //printf("Percent:[%%]\n");
    len = _printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);

    /*len = _printf("Percent:[%%]\n");
    printf("longitud:[%d]\n", len);*/

    return (0);
}
