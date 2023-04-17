#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a dog struct
 * @d: pointer to the dog struct
*/


void print_dog(struct dog *d)
{
if (!d)
{
return;
}

if (!d->name)
{
printf("Name: (nil)");
}
else
{
printf("Name: %s", d->name);
}

if (!d->age)
{
printf("\nAge: (nil)");
}
else
{
printf("\nAge: %f", d->age);
}

if (!d->owner)
{
printf("\nOwner: (nil)\n");
}
else
{
printf("\nOwner: %s\n", d->owner);
}
}
