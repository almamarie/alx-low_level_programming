#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _size - gets the length of a string
 * @s: source string
 * Return: size of a string
*/

int _size(char *s)
{
int size;
size = strlen(s);
return (size + 1);
}


/**
 * _strdup - duplicates a string
 * @str: source string
 * Return: pointer to duplictae string
*/

char *_strdup(char *str)
{
int i;
char *s;
int size;

size = _size(str);

if (size <= 0)
{
return (NULL);
}

s = malloc(size * (sizeof(char)));

if (s == NULL)
{
return (NULL);
}

i = 0;
while (i < size)
{
s[i] = str[i];
i++;
}

return (s);
}
