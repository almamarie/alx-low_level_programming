#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * print_rev - entry point
 * Return: void
 * description: prints a string in reverse
 * @s: an array of char
*/

void print_rev(char *s)
{
int str_len;
int i;

str_len = strlen(s);

for (i = (str_len - 1); i >= 0 ; i--)
{
_putchar(s[i]);
}

_putchar('\n');
}
