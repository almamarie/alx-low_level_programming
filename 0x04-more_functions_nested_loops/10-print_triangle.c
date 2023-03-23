#include "main.h"

/**
 * print_triangle - entery point
 * description: prints a triangle,
 * followed by a new line.
 * @size: integer input
 * Return: void.
 */
void print_triangle(int size)
{

int i;
int spaces;
int hashes;

if (size < 1)
{
_putchar('\n');
return;
}

for (i = 1; i < (size + 1); i++)
{


for (spaces = 0; spaces < (size - i); spaces++)
{
_putchar(' ');
}


for (hashes = 0; hashes < i; hashes++)
{
_putchar('#');
}

_putchar('\n');
}
}
