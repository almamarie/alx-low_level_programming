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
 * _concat - concatenates a string
 * @dest: destination string
 * @src: source string
 * @size1: size of @dest
 * @size2: size of @src
 * Return: null
*/

void _concat(char *dest, int size1, char *src, int size2)
{
int i, j;

i = size1 == 0 ? size1 : size1 - 1;
j = 0;

while (i < size2)
{
dest[i] = src[j];
j++;
i++;
}

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
int i, j;
char *result;

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

size1 = _size(s1);
size2 = _size(s2);

if (s1 == 0 && s2 == 0)
{
result = malloc(sizeof(char));
result[0] = '\0';
return (result);
}

result = malloc((size1 + size2) * (sizeof(char)));

if (result == NULL)
{
return (NULL);
}

i = 0;
while (s1[i] != '\0')
{
result[i] = s1[i];
i++;
}

j = 0;
while (s2[j] != '\0')
{
result[i] = s2[j];
i++;
j++;
}

result[size1 + size2 - 1] = '\n';
return result;
}
