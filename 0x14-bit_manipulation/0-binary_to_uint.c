#include <stdio.h>


/**
 * binary_to_uint - converts binary to base 10
 * @b: string containing binary
 * Return: converted number or 0
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int val = 0;
int i = 0;

if (b == NULL)
return (0);

for (i = 0; b[i] != '\0'; i++)
{

if (!(b[i] == '0' || b[i] == '1'))
{
return (0);
}
val <<= 1;
val += b[i] - '0';
}

return (val);
}

