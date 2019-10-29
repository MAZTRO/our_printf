#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len = 0;
    int len2 = 0;
    char lol[] = "I am a string !";
    int a = 0;

    a = _printf("hola\n");
    printf("%d\n\n", a);
    _printf("hola %c\n", 'H');
    printf("hola %c\n", 'H');
    _printf("%c\n", 'O');
    printf("%c\n", 'O');
    _printf("hola %s\n", "mundo");
    printf("hola %s\n", "mundo");
    _printf("%s\n", "Hola mundo");
    printf("%s\n", "Hola mundo");
    _printf("%c%s", 'L', "C y S juntos\n");
    printf("%c%s", 'L', "C y S juntos\n");
    _printf("hola %c mundo\n", 'Y');
    printf("hola %c mundo\n", 'Y');
    _printf("%e\n");
    _printf("%c\n");
    printf("%e\n");
    printf("%c\n\n");
    _printf("hola %%\n");
    printf("hola %%\n");
    _printf("hola %%%c\n", 'H');
    printf("hola %%%c\n\n", 'H');
    _printf("%c %c\n", 'a');
    _printf("%c         %c\n", 'a', 'b');
    printf("%c         %c\n", 'a', 'b');
    _printf("            hola\n");
    printf("            hola\n");
    _printf("hola[%c]\n", 'H');
    printf("hola[%c]\n", 'H');
    _printf("%%%%%%%s\n", "hola");
    printf("%%%%%%%s\n", "hola");
    _printf("");
    _printf("%a%z%c%%\n", 'H');
    _printf("NULL \n");
    _printf("'\0'\n");
    printf("\n");
    printf("'\0'\n");
    _printf("1 + 1\n");
    _printf("#$%%hola\n");
    _printf("%%\n");
    _printf("%");
    _printf("%%r\n");
    _printf("hello%%\n");
    _printf("minehello%\n");
    _printf("hello%r\n");
    _printf("mineUnknown:[%r]\n");
    _printf("mineCharacter:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("Let's try to printf a simple sentence.\n");
    printf("Let's try to printf a simple sentence.\n");
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n\n", "I am a string !");

    len = _printf("04 - String:[%s]\n", lol);
    len2 = printf("04 - String:[%s]\n", lol);
    printf("06 - Len:[%d]\n", len);
    printf("06 - Len:[%d]\n", len2);

    return (0);
}
