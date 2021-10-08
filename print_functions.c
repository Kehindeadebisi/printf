#include "main.h"

/**
 * print_char - writes the character c to stdout
 * @arg:argument
 *
 * Return: character on success
 * if error occur, -1 is returned.
 */

int print_char(va_list args)
{
_putchar(va_arg(args, int));
return (1);
}


/**
 * print_str - prints a string with a 's' (lower case) specifier
 * @arg: argument
 * Return: number of character printed
 */
int print_str(va_list arg)
{
int i;
char *str = va_arg(arg, char *);

if (str == NULL)
str = "(null)";

for (i = 0; str[i]; i++)
{
_putchar(str[i]);
}
return (i);
}

/**
 * print_percent - prints character "%"
 * @args: arguments
 *
 * Return: character "%"
 */
int print_percent(va_list args)
{
(void)args;
return (write(1, "%", 1));
}
