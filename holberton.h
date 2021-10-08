#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

/**
  * struct func_type - Struct specifiers
  * @t: The conversion specifier
  * @f: The function pointer
  */
typedef struct func_type
{
char *t;
int (*f)(va_list);
} func_t;

int _putchar(char c);
int print_char(va_list args);
int print_str(va_list arg);
int print_percent(va_list args);
int print_dec(va_list args);
int printocta(char *format, va_list pa);
int printhex(char *format, va_list pa);
int printHEX(char *format, va_list pa);
int (*get_func(const char *format))(va_list);
int _printf(const char *format, ...);
#endif
