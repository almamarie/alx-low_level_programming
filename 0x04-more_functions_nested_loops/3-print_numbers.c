#include "main.h"

/**
 * print_numbers - entry point
 * Return: 0 on success and 1 otherwise
 * Description: prints the numbers from 0 to 9
*/

void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
