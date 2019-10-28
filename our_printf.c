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

	while (format[count] != '\0')
	{
		if (format[count] != '%')
		{
			_putchar(format[count]);
		}
		else
		{
			if (format[count + 1] == 'c')
			{
				our_char = va_arg(our_list, int);
				_putchar(our_char);
				count++;
			}
			argument = va_arg(our_list, void*);
			count = switch_task_0(format, count, argument);
		}
		count++;
	}
	va_end(our_list);
	return (count - 1);
}
