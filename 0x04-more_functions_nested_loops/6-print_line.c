#include "main.h"

/**
 * print_line - entry point
 * Return: 0 on success and 1 otherwise
 * @n: integer input
 * Description: prints the character "_" n times
*/

void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
