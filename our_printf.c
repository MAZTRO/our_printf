#include "holberton.h"
#include <stdio.h>

/**
 * cases_2 - Print anything
 * @module: the string that i have in the input.
 * @our_list: our list.
 * Return: Always 0 if the functions works.
 */

int cases_2(va_list our_list, const char *module)
{
	int count = 0;

	switch (*module)
	{
		case 'c':
		count += case_c(our_list);
				break;
		case 'd':
			count = case_digit(our_list);
			break;
		case 'i':
			count = case_digit(our_list);
			break;
		case '\0':
			return (0);
		default:
			return (-1);
	}

	return (count);
}

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
	for (; *format != '\0' && format != NULL; format++)
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
			case 's':
				count_null = case_s(our_list);
				if (count_null == (-1))
					return (-1);
				count += count_null;
				break;
			case '%':
				_our_write('%');
				count++;
				break;
			default:
				count = cases_2(our_list, format);
				if (count == (-1))
					format--;
				count = 0;
				break;
			}
		}
	}
	va_end(our_list);
	return (count);
}
