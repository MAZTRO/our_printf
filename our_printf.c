#include "holberton.h"

/**
 * _printf - Print anything
 * @format: the string that i have in the input.
 * Return: Always 0 if the functions works.
 */

int _printf(const char *format, ...)
{
	void *argument = NULL;
	int count = 0;
	char our_char;
	va_list our_list;

	va_start(our_list, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			_our_write(*format);
			count++;
		}
		else
		{
			format++;
			switch (*format)
			{
			case 'c':
				our_char = va_arg(our_list, int);
				_our_write(our_char);
				count++;
				break;
			case 's':
				argument = va_arg(our_list, void*);
				count += case_s(argument);
				break;
			case '%':
				count += percent(format);
				format += count;
				break;
			default:
				break;
			}
		}
		format++;
	}
	va_end(our_list);
	return (count);
}
