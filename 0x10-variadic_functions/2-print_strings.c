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
char *str;
char *cpy;

va_start(ap, n);

for (i = 0; i < n; i++)
{
cpy =  va_arg(ap, char*);
str = cpy == NULL ? "(nil)" : cpy;
printf("%s", str);

if ((i != (n - 1)) && (separator != NULL))
{
printf("%s", separator);
}
}

va_end(ap);
printf("\n");

}
