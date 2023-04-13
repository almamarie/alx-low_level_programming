#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: the value
 * Return: pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
int *p;

p = malloc(b);

if (p == NULL)
{
exit(98);
}

return (p);
}
