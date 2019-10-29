#include "holberton.h"
/**
 * recur - Print anything
 * @format: the string that i have in the input.
 * Return: Always 0 if the functions works.
 */

int recur(long int our_digit, int count)
{
	if (our_digit < 0)
	{
		_our_write('-');
		our_digit = -our_digit;
    }

    if (our_digit / 10)
		recur(our_digit / 10, count++);

    _our_write(our_digit % 10 + '0');
	return (count);
}

/**
 * case_digit - Print anything
 * @str the string that i have in the input.
 * @our_var: the integer to convert.
 * @base: the base of the number, always 10
 * Return: the new string.
 */

int case_digit(va_list our_digit)
{
	long int digit = 0;
	int count = 0, count_total = 0;

	digit = va_arg(our_digit, long int);
	count_total = recur(digit, count);

	return (count_total - 1);
}

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
		case 'd':
			count += case_digit(our_list);
			break;
		case 'i':
			count += case_digit(our_list);
			break;
		default:
		break;
	}

	return (0);
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
				cases_2(our_list, format);
				break;
			}
		}
	}
	va_end(our_list);
	return (count);
}
