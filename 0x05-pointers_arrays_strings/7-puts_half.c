#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - entry point
 * Return: void
 * description: prints the second half of the string
 * @str: char[] input
*/

void puts_half(char *str)
{

int i;
int str_len;

str_len = strlen(str);


printf("\nstring length: %d\n", str_len  / 2);


if (str_len % 2 == 0)
{
for (i = str_len / 2; i < str_len; i++)
{
_putchar(str[i]);
}
} 
else 
{
for (i = (str_len - 1) / 2; i < str_len; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');

}
