#include "main.h"
#include <string.h>
/**
 * puts2 - entry point
 * Return: void
 * description: prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: char[] input
*/

void puts2(char *str)
{

int i;
int str_len;

str_len = strlen(str);

for (i = 0; i < str_len; i = i + 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
