#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *
-printf - function
*@format: string
*Return: number of characters
*/

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	i = _print_format(format, args);
	va_end(args);
	return (i);

}
