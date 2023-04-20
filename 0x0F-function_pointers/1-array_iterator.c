#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: array of integers
 * @size: size of array
 * @action: function to run
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (!array || !size || !action)
{
return;
}

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
