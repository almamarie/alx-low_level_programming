#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - concatenates a string
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * @n: number of @s2 to concatenate
 * Return: Pointer to concatenated string or NULL if error.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int l1, l2, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

l1 = strlen(s1);
l2 = strlen(s2);

if (n > l2)
n = l2;
s = malloc((l1 + n + 1) * sizeof(char));
if (s == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
{
s[i] = s1[i];
}
for (j = 0; j < n; i++, j++)
{
s[i] = s2[j];
}
s[i] = '\0';

return (s);
}
