#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 * Return: always 0 (success)
 * Description: prints all the lowercase alphabets using putchar
 */

int main(void)
{
int al;
for (al = 0; al <= 9; al++)
{
	printf("%d",al);
}
putchar('\n');
return (0);
}
