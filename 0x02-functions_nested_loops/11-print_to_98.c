#include "main.h"

/**
 * add - entry point
 * Return: void
 * @n: integer input
 * description: adds two numbers
*/

void print_to_98(int n)
{
int i;
int hun_rem;
if (n < 98)
{
for (i = n; i < 99; i++)
{
if(i > -10 && i < 10)
{
_putchar(i + '0');
}
else
{
 _putchar((i / 10) + '0');
 _putchar((i % 10) + '0');
}
_putchar(',');
_putchar(' ');
}
}

if (n >= 98 && n < 100)
{
for (i = n; i > 97; i--)
{
 _putchar((i / 10) + '0');
 _putchar((i % 10) + '0');
}
}

if (n >= 100)
{
for (i = n; i != 97; i--)
{
hun_rem = i /10;
_putchar((i / 100) + '0');
_putchar((hun_rem / 10) + '0');
_putchar((hun_rem % 10) + '0');
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
