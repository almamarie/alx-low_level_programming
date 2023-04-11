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



// =========================================================================================================

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

result[size1 + size2] = '\n';
return result;
// if (size1 > 0 && size2 > 0)
// {
// size3 = size1 + size2;
// result = malloc(size3 * (sizeof(char)));
// _concat(result, 0, s1, size1);
// _concat(result, size1, s2, (size1 + size2));
// }

// if (size1 > 0 && size2 <= 0)
// {
// result = malloc(size1 * (sizeof(char)));
// _concat(result, 0, s1, size1);
// }

// if (size1 <= 0 && size2 > 0)
// {
// result = malloc(size2 * (sizeof(char)));
// _concat(result, 0, s2, size2);
// }

// result[size1 + size2 + 1] = '\0';
// return (result);
}