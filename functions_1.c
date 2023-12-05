#include "main.h"

/**
* charac -prints a character
* @print: argument to print
* Return: argument
*/
int charac(va_list print)
{
	int c;

	c = va_arg(print, int);
	return (_putchar(c));
}

/**
* strin - prints a string
* @print: argument
* Return: string
*/
int strin(va_list print)
{
	char *str;
	int i = 0;

	str = va_arg(print, char *);
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
* percen - prints %
* @print: argument
* Return: %
*/
int percen(va_list print)
{
	(void)print;

	return (_putchar('%'));
}
