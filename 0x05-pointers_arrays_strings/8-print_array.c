#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_array - entry point
 * Return: void
 * description: prints n elements of an array of
 * integers, followed by a new line.
 * @a: *char[] input
 * @n: the number of elements to print
*/

void print_array(int *a, int n)
{
int i;

if (n <= 0)
{
printf("\n");
return;
}

for (i = 0; i < n; i++)
{
if (i + 1 < n)
{
printf("%d, ", a[i]);
}
else
{
printf("%d\n", a[i]);
}
}
}
