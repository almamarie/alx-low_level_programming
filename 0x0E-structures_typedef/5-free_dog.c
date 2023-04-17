#include<stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dag struct
 * @d: pointer to the struct
 * Return: void
*/

void free_dog(dog_t *d)
{
if (!d)
{
return;
}
free(d);
}
