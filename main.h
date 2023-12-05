#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _putchar(char c);
int charac(va_list print);
int strin(va_list print);
int percen(va_list print);
/**
 * struct specifier- struct
 * @c: format specifier
 * @fptr: The function associated
 */

typedef struct specifier
{
	char c;
	int (*fptr)(va_list);
} spec;



#endif
