#include "main.h"

/**
 * swap_int - entry point
 * Return: void
 * description: swaps the values of the input.
 * @a: a pointer value
 * @b: a pointer value
*/


void swap_int(int *a, int *b)
{

*a = *b + *a;

*b = *a - *b;

*a = *a - *b;
}
