#include "main.h"
/**
  * get_func - checker for valid specifier
  * @args: A list of variadic arguments
  *
  * Return: The length of the string
  */
int (*get_func(const char *format))(va_list)
{

int i;
func_t p[] = {
{"c", print_char},
{"s", print_str},
{"%", print_pct},
{"d", print_dec},
{"i", print_dec},
{NULL, NULL}
};

for (i = 0; p[i].t; i++)
{
if (*format == *(p[i].t))
{
return (p[i].f);
}
}
return (NULL);
}
