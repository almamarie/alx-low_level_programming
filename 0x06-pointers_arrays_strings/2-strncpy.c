#include <string.h>

/**
 * _strncpy - entry bpoint
 * Return: *char[]
 * description: concatinates 2 strings up to n bytes
 * @dest: destination char[] pointer
 * @src: source char[] pointer
 * @n: the maximum number of characters to be appended.
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
