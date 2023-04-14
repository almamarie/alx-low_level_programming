#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: the minimum number
 * @max: the maximum number
 * Return: pointer to the array or NULL on error
*/

int *array_range(int min, int max)
{
int i, j;
int *array;
int range;

if (min > max)
{
return (NULL);
}

range = max - min + 1;
array = malloc(range * sizeof(int));

if (array == NULL)
{
return (NULL);
}

/*
for (; range > 0; range--)
{
array[range - 1] = range - 1;
}
*/

for (i = 0, j = min; i < range; i++, j++)
{
array[i] = j;
}

return (array);

}
