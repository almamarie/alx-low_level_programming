#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Return: on success, 0, on error, 1
 * Description: prints the alphabets in lowercase 10 times
*/

void print_alphabet_x10(void)
{
char i;
int j;
for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
_putchar('\n');
}
}
}
