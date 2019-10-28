#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    //int len = 0;
    char lol[] = "I am a string !";


    _printf("01 - [%c]\n", 'H');
    _printf("02 - [%s]\n\n", lol);

    _printf("03 - Module:[%c %% %% %s]\n", 'H', lol);
    printf("03 - Module:[%c %% %% %s]\n\n", 'H', lol);

    _printf("03 - Module:[%c %%% %%% %s]\n", 'H', lol);
    printf("03 - Module:[%c %%% %%% %s]\n", 'H', lol);

    /*_printf("02 - Character:[%c %%%% % %s ]\n", 'H', lol);
    _printf("02 - Character:[%c %% %% %s ]\n", 'H', lol);
    _printf("02 - Character:[%c %% % %s ]\n", 'H', lol);
    _printf("02 - Character:[%c % % %s ]\n", 'H', lol);
    _printf("02 - Character:[%c % %s ]\n", 'H', lol);
    printf("02 - Character:[%c % %s]\n", 'H', lol);
    */

	//_printf("03 - lolol %% [%c y %s]\n", 'H', lol);
    //printf("03 - lolol %%% [%c y %s]\n", 'H', lol);
/*
    len = _printf("04 - String:[%s]\n", lol);

    _printf("05 - String:[%s]\n", "I am a string !");
    _printf("06 - Len:[%d]\n", len);
	_printf("07 - [%%%_ _ _%%   %%%% .]\n");
    */
    return (0);
}
