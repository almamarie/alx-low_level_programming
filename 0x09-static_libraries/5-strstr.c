#include <stddef.h>
#include <string.h>
/**
 * _strstr -  searches a string for any of a set of bytes
 * @haystack: src string
 * @needle: substring to locate
 * Return: a pointer to the beginning of the located
 * substring or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{

return (strstr(haystack, needle));

}
