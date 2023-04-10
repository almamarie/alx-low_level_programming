#include "main.h"
#include <ctype.h>

/**
 * _islower - entry point
 * @c: a character
 * Return: 1 if c is lowercase and 0 otherwise
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
