#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

/**
  * struct specifiers - Struct specifiers
  * @specifier: The conversion specifier
  * @f: The function pointer
  */

typedef struct specifiers
{
	char *specifiers;
	int (*f)(va_list args);
} spc_dt;

int _write(char c);
int _printf(const char *format, ...);
int _print_a_string(va_list args);
int _print_format(const char *format, va_list args);

#endif
