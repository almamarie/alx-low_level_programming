#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints a list of strings
 * @separator: the separator of the strings
 * @n: the number of strings to print
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;

va_start(ap, n);

for (i = 0; i < n; i++)
{
if (i == (n - 1))
{
printf("%s", va_arg(ap, char*));
}
else
{
printf("%s%s", va_arg(ap, char*), separator);
}
}

va_end(ap);
printf("\n");

}
