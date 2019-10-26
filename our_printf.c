#include "holberton.h"

/**
 * _printf - Print anything
 * @format: the string that i have in the input.
 * Return: Always 0 if the functions works.
 */

void question()
{

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
	/* Counter that get the position of
	FORMAT after find a % symbol. */

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

		char *argument_string = NULL;
		char argument_char = 0;

		argument_string = va_arg(our_list, char*);
		switch_char(argument_string);

		argument_char = va_arg(our_list, char);

			switch_numbers();
			switch_rare_case();
			switch_unknown();
	}

	va_end(our_list);
	return (0);
}
