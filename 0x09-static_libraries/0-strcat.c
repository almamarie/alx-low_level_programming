#include <string.h>

/**
 * _strcat - entry bpoint
 * Return: *char[]
 * description: concatinates 2 strings
 * @dest: destination char[] pointer
 * @src: source char[] pointer
*/

char *_strcat(char *dest, char *src)
{
strcat(dest, src);
return (dest);
}
