#include <stdlib.h>
/**
 * create_array - creates a dynamoic array
 * @size: the size of the dynamic array
 * @c: the character to initialize with
 * Return: a pointer to the dynamix array
*/

char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;

s = malloc(size * sizeof(char));
i = 0;

while (i < size)
{
s[i] = c;
i++;
}

return s;
}
