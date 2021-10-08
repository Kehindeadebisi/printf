#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>



/**
 * struct funct_type - structure definition of a printTypeStruct
 * @t: pointer to the argument
 * @f: function pointer linked with argument
 */
typedef struct func_type
{
char *t;
int (*f)(va_list);
} func_t;

int _putchar(char c);
int (*get_func(const char *format))(va_list);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_dec(va_list args);
int print_str(va_list args);
int print_percent(va_list args);

#endif
