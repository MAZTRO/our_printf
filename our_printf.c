#include "holberton.h"

/**
 * _printf - Print anything
 * @format: the string that i have in the input.
 * Return: Always 0 if the functions works.
 */

char our_switch()
{

}

/**
 * _printf - Print anything
 * @format: the string that i have in the input.
 * Return: Always 0 if the functions works.
 */

int _printf(const char *format, ...)
{
	int count = 0; /* Counter of FORMAT */
	int inter_count = 0; /* Counter that get the position of FORMAT after find a % symbol. */

	va_list our_list;

	va_start(our_list, format);

	while (format[count] != '\0')
	{
		while (format[count] != '%')
		{
			_putchar(format[count]);
			*format++;
		}

		inter_count = count + 1;

		if (format[inter_count] == '%')
		{
			_our_switch();
		}
	}

	va_end(our_list);
	return (0);
}
