#include "main.h"
/**
* _printf- produces output according to a format
* @format: character string
* Return: number of printed characters
*/
int _printf(const char *format, ...)
{
	spec array[] = {
			{'c', charac},
			{'s', strin},
			{'%', percen},
			{'\0', NULL}
	};
	int count = 0;
	size_t i = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			while (array[i].c != '\0' && array[i].c != *format)
			{
				i++;
				if (array[i].c != '\0')
				{
					count += array[i].fptr(args);
				}
				else
				{
					count += _putchar('%') + _putchar(*format);
				}
			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
