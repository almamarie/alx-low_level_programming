#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: the minimum number
 * @max: the maximum number
 * Return: pointer to the array or NULL on error
*/

int *array_range(int min, int max)
{
int *array;
int range;

if (min > max)
{
return (NULL);
}

range = max - min + 1;
array = malloc((range + 1) * sizeof(int));

if (array == NULL)
{
return (NULL);
}

for (; range > 0; range--)
{
array[range - 1] = range - 1;
}

return (array);

}
