#include <stdio.h>

/**
 * print_triangle - entery point
 * description: prints a triangle, 
 * followed by a new line.
 * Return: void.
 */
void print_triangle(int size)
{

int i;
int spaces;
int hashes;

for (i = 1; i < (size + 1); i++)
{

// spaces = 10 - i
for (spaces = 0; spaces < (size - i); spaces++)
{
printf(" ");
}

// hashes = i
for (hashes = 0; hashes < i; hashes++)
{
printf("#");
}

printf("\n");
}
}
