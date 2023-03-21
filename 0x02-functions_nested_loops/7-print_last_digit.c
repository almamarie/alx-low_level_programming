#include "main.h"
/**
 * print_last_digit - entry point
 * Return: last digit of the input
 * @c: integer input
 * description: this function returns the last digit of the input
*/

int print_last_digit(int c)
{
int j;

j = c % 10;
_putchar(j);
return (c);
}
