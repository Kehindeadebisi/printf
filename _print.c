#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * specifierIdentifiers - function to print the specifiers characters
 * @next: character after the % character
 * @arg: argument for the indentifier
 * Return: the number of character printed excluding null bytes
 */

int specifierIdentifiers(char next, va_list arg)
{
int index;

identifierStruct functs[] = {
{"c", print_char},
{"s", print_str},
{"d", print_int},
{"i", print_int},
{"u", print_unsigned},
{"S", print_STR},
{NULL, NULL}
};

for (index = 0; functs[index].indentifier != NULL; index++)
{
if (functs[index].indentifier[0] == next)
return (functs[index].printer(arg));

}
return (0);
}


/**
 * _printf - function that perform similar function to printf
 * @format: character string
 * Return: number of characters printed
*/

int _printf(const char *format, ...)
{

unsigned int i;
int numberofcharPrinted = 0, identifierPrinted = 0;
va_list arg;
va_start(arg, format);

if (format == NULL)
return (-1);

for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
_putchar(format[i]);
numberofcharPrinted++;
continue;
}
if (format[i + 1] == '%')
{
_putchar('%');
numberofcharPrinted++;
i++;
continue;
}
if (format[i + 1] == '\0')
return (-1);

identifierPrinted = specifierIdentifiers(format[i + 1], arg);
if (identifierPrinted == -1 || identifierPrinted != 0)
i++;

if (identifierPrinted > 0)
numberofcharPrinted += identifierPrinted;

if (identifierPrinted == 0)
{
_putchar('%');
numberofcharPrinted++;
}
}
va_end(arg);
return (numberofcharPrinted);

}
