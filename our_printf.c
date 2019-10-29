#include "holberton.h"

/**
 * _printf - Print anything
 * @format: the string that i have in the input.
 * Return: Always 0 if the functions works.
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list our_list;

	va_start(our_list, format);
	while (*format != '\0' && format != NULL)
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
				count += case_c(our_list);
				break;
			case 's':
				count += case_s(our_list);
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
	if (format == NULL)
	{
		return (-1);
	}
	va_end(our_list);
	return (count);
}
