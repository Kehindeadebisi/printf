#ifndef HOLBERTON_H
#define HOLBERTON_H


#include <stdarg.h>

int _putchar(char c);






/**
 * struct identifierStruct - structure definition of a printTypeStruct
 * @indentifier: type
 * @printer: function to print
 */
typedef struct identifierStruct
{
char *indentifier;
int (*printer)(va_list);
} identifier;


#endif
