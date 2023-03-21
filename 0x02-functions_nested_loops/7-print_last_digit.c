#include "main.h"
/**
 * print_last_digit - entry point
 * Return: last digit of the input
 * @i: integer input
 * description: this function returns the last digit of the input
*/

int print_last_digit(int i)
{

int k = i % 10;
if (k < 0)
{
k = -k;
}

_putchar(k + '0');

return (k);
}
