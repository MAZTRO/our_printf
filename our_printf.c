#include "holberton.h"

/**
 * question - ask the type;
 * @argument_input: the string that i have in the input.
 * Return: Always 0 if the functions works.
 */

void question(char char_type, void *argument_input)
{
	if (char_type == 's' || char_type == 'c')
	{
		switch_char(argument_input);
	}
	else if (char_type == 'i' || char_type == 'd' || char_type == 'u')
	{
		switch_numbers(argument_input);
	}
	else if (char_type == 'o' || char_type == 'x' ||
	 char_type == 'X' || char_type == 'p' || char_type == '%')
	{
		switch_rare_case(argument_input);
	}
	else
	{
		switch_unknown(argument_input);
	}
}

/**
 * _printf - Print anything
 * @format: the string that i have in the input.
 * Return: Always 0 if the functions works.
 */

int _printf(const char *format, ...)
{
	int count = 0;
	/* Counter of FORMAT */
	int inter_count = 0;
	/**
	 * Counter that get the position of
	 * FORMAT after find a % symbol.
	 */

	va_list our_list;

	va_start(our_list, format);

	while (format[count] != '\0')
	{
		while (format[count] != '%')
		{
			_putchar(format[count]);
			count++;
		}

		inter_count = count + 1;

		char char_type;
		void *argument = NULL;

		char_type = format[inter_count];
		argument = va_arg(our_list, void*);

		question(char_type, argument);
	}

	va_end(our_list);
	return (count);
}
