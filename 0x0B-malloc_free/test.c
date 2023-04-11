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
 * _size - concatenates a string
 * @dest: destination string
 * @src: source string
 * Return: null
*/

void _concat(char *dest, int size1, char *src, int size2)
{
int i, j;

i = size1 == 0 ? size1 : size1 - 1;
j = 0;

printf("size1: %d\tsize2: %d\n", size1, size2);
while (i < size2)
{
dest[i] = src[j];
printf("%c: %c", dest[i], src[j]);
j++;
i++;
}

printf("j: %d\n", j);
}


/**
 * str_concat - concatenates a string
 * @s1: pointer to string 1
 * @s2: pointer to string 1
 * Return: pointer to concatenated string
*/

char *str_concat(char *s1, char *s2)
{
int size1;
int size2;
char *result;

size1 = s1 == NULL ? 0 : _size(s1);
size2 = s2 == NULL ? 0 : _size(s2);

// printf("Size of s1: %d\t size of 2: %d\n", size1, size2);

if (s1 == 0 && s2 == 0)
{
return NULL;
}

if (size1 > 0 && size2 > 0)
{
result = malloc((size1 + size2) * sizeof(char));
_concat(result, 0, s1, size1);
_concat(result, size1, s2, (size1 + size2));
}

if (size1 > 0 && size2 <= 0)
{
result = malloc(size1 * sizeof(char));
_concat(result, 0, s1, size1);
}

if (size1 <= 0 && size2 > 0)
{
result = malloc(size2 * sizeof(char));
_concat(result, 0, s2, size2);
}

return result;
}
