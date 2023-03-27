#include "main.h"
/**
 * rev_string - entry point
 * Return: void
 * description: reverses a string
 * @s: an array of char
*/

void rev_string(char *s)
{
int i;
char rev_str[10];

for (i = 10; i >= 0 ; i--)
{
rev_str[(8 - i)] = s[i];
}

for (i = 0; i < 10 ; i++)
{
s[i] = rev_str[i];
}

}
