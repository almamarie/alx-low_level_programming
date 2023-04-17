#include "dog.h"
#include <stdlib.h>
#include<string.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age off dog
 * @owner: owner of dog
 * Return: dog_t
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

new_dog = malloc(sizeof(dog_t));

if (!new_dog)
{
exit(EXIT_FAILURE);
}

new_dog->age = age;

new_dog->name = malloc((strlen(name) + 1) * sizeof(char));

if (!new_dog->name)
{
free(new_dog);
exit(EXIT_FAILURE);
}

strcpy(new_dog->name, name);

new_dog->owner = malloc((strlen(owner) + 1) * sizeof(char));

if (!new_dog->owner)
{
free(new_dog->name);
free(new_dog);
exit(EXIT_FAILURE);
}

strcpy(new_dog->owner, owner);

return (new_dog);
}
