#include "main.h"

/**
 * _isupper - entry point
 * Return: 1 if is upper, 0 otherwise
 * @c: integer input
 * Description: checks if the input is upper
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}

return (0);
}
