#include <string.h>

/**
 * _strncat - entry bpoint
 * Return: *char[]
 * description: concatinates 2 strings up to n bytes
 * @dest: destination char[] pointer
 * @src: source char[] pointer
 * @n: the maximum number of characters to be appended.
*/

char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
