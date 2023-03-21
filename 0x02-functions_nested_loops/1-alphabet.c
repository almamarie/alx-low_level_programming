#include "main.h"

/**
 * print_alphabet - entry point
 * Return: on success, 0, on error, 1
 * Description: prints the alphabets in lowercase
*/

void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
