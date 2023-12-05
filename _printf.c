#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - prints formatted string
 * @format: The string
 * Return: The number of printed characters
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list print;
	int (*fnc)(va_list);

	va_start(print, format);
	if (format == NULL)
	{
		return (-1);
	}

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			fnc = specifier(format[i + 1]);
			if (fnc != NULL)
			{
				count += fnc(print);
				i += 2;
				continue;
			}
			else
			{
				count += _putchar('%');
				i++;
				continue;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
			i++;
			continue;
		}
	}
	va_end(print);
	return (count);
}
