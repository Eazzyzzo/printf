#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int (*specifier(char fmt))(va_list);
int charac(va_list print);
int strin(va_list print);
int integ(va_list print);
int percen(va_list print);
/**
 * struct specifier - struct type specifier
 * @c : The type
 * @fptr: The function pointer to a function that prints
 */
typedef struct specifier
{
	char c;
	int (*fptr)(va_list);
} spec;

#endif
