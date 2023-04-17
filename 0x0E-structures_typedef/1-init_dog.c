#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * init_dog - initializes a dog struct
 * @d: pointer to the dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (!d)
{
exit(EXIT_FAILURE);
}

(*d).name = malloc(strlen(name) * sizeof(char));
if (!(*d).name)
{
exit(EXIT_FAILURE);
}

strcpy((*d).name, name);

d->age = age;

d->owner = malloc(strlen(owner) * sizeof(char));

if (!d->owner)
{
exit(EXIT_FAILURE);
}

strcpy(d->owner, owner);

}
