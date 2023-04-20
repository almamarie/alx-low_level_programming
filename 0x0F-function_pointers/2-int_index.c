#include <stdio.h>
/**
 * int_index - Searches for an integer
 * @array: the array to find the int in
 * @size: size of @array
 * @cmp: function to use for comparison
 * Return: index of the inter or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size < 0 || !array || !cmp)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
