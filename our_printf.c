#include "holberton.h"

/**
 * _printf - Print anything
 * @format: the string that i have in the input.
 * Return: Always 0 if the functions works.
 */

int _printf(const char *format, ...)
{
	char ch_type;
	void *argument = NULL;
	int count = 0;
	int inter_count = 0, strcount;

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
			inter_count = count + 1;
			ch_type = format[inter_count];
			argument = va_arg(our_list, void*);

			switch (format[inter_count])
			{
			case 'c':
				_putchar(va_arg(our_list, int));
				break;
			case 's':
				for (strcount = 0; ((char*)argument)[strcount] != '\0'; strcount++)
				{
					_putchar(((char*)argument)[strcount]);
				}
			case '%':


			default:
				break;
			}
		}
		count++;
	}

	va_end(our_list);
	return (count);
}
