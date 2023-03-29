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
strncpy(dest, src, n);
return (dest);
}
