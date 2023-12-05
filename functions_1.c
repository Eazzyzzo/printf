#include "main.h"

/**
 * charac - prints a character
 * @print: arguments pointing to the character
 * Return: Number of characters printed (1)
 */
int charac(va_list print)
{
	char c;

	c = va_arg(print, int);
	_putchar(c);
	return (1);
}

/**
 * strin - prints a string
 * @print: arguments pointing to the string
 * Return: Number of characters printed
 */
int strin(va_list print)
{
	char *s;
	int i;

	s = va_arg(print, char *);
	if (s == NULL)
	{
		s = "(null)";
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}

/**
 * integ - Prints an integer
 * @print: arguments pointing to the integer
 * Return: Number of characters printed
 */
int integ(va_list print)
{
	unsigned int d;
	int n, i = 1, c = 0;

	n = va_arg(print, int);

	if  (n < 0)
	{
		d = -(n);
		_putchar('-');
		c++;
	}
	else
		d = n;

	for (; (d / i) > 9; )
	{
		i =  i * 10;
	}

	while (i >= 1)
	{
		_putchar(((d / i) % 10) + '0');
		i = i / 10;
		c++;
	}
	return (c);
}

/**
 * percen - prints percentage character
 * @print: arguments pointing to the character
 * Return: Number of characters printed
 */
int percen(va_list print)
{
	(void)print;

	_putchar('%');
	return (1);
}
