#include "main.h"
#include <stdio.h>

/**
 * print_number - entry point
 * Return: void
 * @n: integer input
 * Description: prints a number
*/

void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n < 9 && n >= 0)
{
_putchar('0' + n);
return;
}

if (n > 9 && n < 100)
{
_putchar('0' + (n / 10));
_putchar('0' + (n % 10));
return;
}

if (n >= 100 && n < 1000)
{
_putchar('0' + (n / 100));
_putchar('0' + ((n / 10) % 10));
_putchar('0' + (n % 10));
return;
}

if (n >= 1000 && n < 10000)
{
_putchar('0' + (n / 1000));
_putchar('0' + ((n / 100) % 10));
_putchar('0' + ((n / 10) % 10));
_putchar('0' + (n % 10));
return;
}

}
