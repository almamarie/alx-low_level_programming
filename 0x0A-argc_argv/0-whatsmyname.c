#include <stdio.h>

/**
 * main - entry point
 * Return: Always (0)
 * @argc: number of arguements
 * @argv: vector of arguements
 *
*/

int main(int argc, char *argv[])
{
if (argc < 0)
{
return (1);
}
printf("%s\n", argv[0]);
return (0);
}
