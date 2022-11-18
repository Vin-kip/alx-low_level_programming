#include <stdarg.h>

#include <stdio.h>

#include "variadic_functions.h"

/**
* print_numbers - prints numbers, followed by a new line.
* @separator: the string to be printed between numbers.
* @n: number of integers passed to the function.
* Return: Nothing.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list list;
unsigned int i;

if (n != 0)
{
va_start(list, n);

for (i = 0; i < n - 1; i++)
{
printf("%d", va_arg(list, int));

if (separator)
printf("%s", separator);
}

printf("%d", va_arg(list, int));

va_end(list);
}
printf("\n");

}
