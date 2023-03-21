#include "main.h"
/**
 * print_sign - entry point
 * Return: -1 if less than 1, 0 if equal to zero, and 1 if greater than 1
 * @n: integer input
 * description: prints and returns the sign of the inbut
*/

int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}

if (n == 0)
{
_putchar('0');
return (0);
}

_putchar('+');
return (1);

}
