#include <stdio.h>

/**
 * add - entry point
 * Return: void
 * @n: integer input
 * description: adds two numbers
*/

void print_to_98(int n)
{
int i;

if (n == 98)
printf("98");

if (n < 98)
{
for (i = n; i < 99; i++)
{
printf("%d", i);
if (i < 98)
{
printf(", ");
}
}
}

if (n > 98)
{
for (i = n; i > 97; i--)
{
printf("%d", i);
if (i > 98)
{
printf(", ");
}
}
}

printf("\n");
}
