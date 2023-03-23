#include "main.h"

/**
 * _isdigit - entry point
 * Return: 1 if is upper, 0 otherwise
 * @c: integer input
 * Description: checks if the input is a digit
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}

return (0);
}
