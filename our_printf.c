#include "holberton.h"

/**
 * _printf - Print anything
 * @format: the string that i have in the input.
 * Return: Always 0 if the functions works.
 */

int _printf(const char *format, ...)
{
	int count = 0, count_null = 0;
	va_list our_list;

	if (format == NULL)
		return (-1);
	va_start(our_list, format);
	for (;*format != '\0' && format != NULL; format++)
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
				count_null = case_s(our_list);
				if (count_null == (-1))
					return (-1);
				count += count_null;
				break;
			case '%':
				count += percent(format);
				format += count;
				break;
			default:
				break;
			}
		}
	}
	va_end(our_list);
	return (count);
}
