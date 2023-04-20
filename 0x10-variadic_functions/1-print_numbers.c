#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: the separator of the numbers
 * @n: the number of numbers to print
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list ap;
unsigned int i;

va_start(ap, n);

for (i = 0; i < n; i++)
{
printf("%d%s", va_arg(ap, int), separator);
}

va_end(ap);

printf("\n");
}
