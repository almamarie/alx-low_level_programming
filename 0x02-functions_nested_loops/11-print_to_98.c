#include <stdio.h>

/**
 * print_to_98 - entry point
 * Return: void
 * @n: integer input
 * description: prints all natural numbers from n to 98, followed by a new line
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
