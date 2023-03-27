#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - entry point
 * Return: void
 * description: prints the second half of the string
 * @str: char[] input
*/

void puts_half(char *str)
{
int i;
int len = strlen(str);
int start_index = len / 2;

start_index = (len / 2);

if ((len % 2) == 1)
{
start_index = ((len + 1) / 2);
}

for (i = start_index; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
