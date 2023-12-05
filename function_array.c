#include "main.h"

/**
 * specifier - specifies the function
 * @fmt: format specifier
 * Return: A pointer to function
 */
int (*specifier(char fmt))(va_list)
{
	int i;

	spec array[] = {
		{'c', charac},
		{'s', strin},
		{'%', percen},
		{'d', integ},
		{'i', integ},
		{'\0', NULL}
	};

	for (i = 0; array[i].c; i++)
	{
		if (array[i].c == fmt)
		{
			return (array[i].fptr);
		}
	}
	return (NULL);
}
