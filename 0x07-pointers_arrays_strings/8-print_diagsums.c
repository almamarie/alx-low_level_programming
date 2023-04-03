#include <stdio.h>
/**
 * print_diagsums - prints the sum of the diagnals
 * of a square matrix
 * @a: square matrix
 * @size: the size of the matrix
 * Return: void
*/

void print_diagsums(int *a, int size)
{
int i, diag_1, diag_2;
diag_1 = 0;
diag_2 = 0;



for (i = 0; i < size; i++)
{
diag_1 += a[(i * size) + i];
}

for (i = (size - 1); i >= 0; i--)
{
diag_2 += a[(i * size) + (size - i - 1)];
}

printf("%d, %d\n", diag_1, diag_2);
}
