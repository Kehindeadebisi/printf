#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_unsignedIntToHex - prints unsigned int to hexadecimal
 * @num: number to print
 * @_case: letter 'a' on the case to print it (upper or lower)
 * Return: number or char printed
 */

int print_unsignedIntToHex(unsigned int num, char _case)
{
unsigned int num2;
int i, j, remainder, nbrCharacters = 0;
char *numhex;

for (num2 = num; num2 != 0; nbrCharacters++, num2 /= 16)
;

numhex = malloc(nbrCharacters);
for (i = 0; num != 0; i++)
{
remainder = num % 16;
if (remainder < 10)
numhex[i] = remainder + '0';
else
numhex[i] = remainder - 10 + _case;
num = num / 16;
}
for (j = i - 1; j >= 0; j--)
_putchar(numhex[j]);
free(numhex);
return (nbrCharacters);
}

/**
 * print_percent - prints a percent
 * @1: va_list arguments from _printf
 * @f: pointer to the struct flags
 * Return: number of char printed
 */
int print_percent(va_list l, flags_t *f)
{
(void)l;
(void)f;
return (_putchar('%'));
}
