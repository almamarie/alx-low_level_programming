#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - creates a 2-dimensional array
 * @width: the wid of the array
 * @height: the height of the array
 * Return: pointer to the array
*/

int **alloc_grid(int width, int height)
{
    int i;
    int **array; 

    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }

    array = malloc(sizeof(int *) * height);

    if (array == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < height; i++)
    {
        array[i] = malloc(sizeof(int) * width);

        if (array[i] == NULL)
        {

        for (; i >= 0; i--)
        {
            free(array[i]);
        }
        free(array);
        return (NULL);
        }
    }


    return (array);

}
