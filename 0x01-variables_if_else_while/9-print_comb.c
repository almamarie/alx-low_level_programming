#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 * Return: always 0 (success)
 * Description: prints all numbers between 0 and 10 using putchar
 */

int main(void)
{
int al;
for (al = 0; al <= 9; al++)
{
	putchar(48 + al);
	if (al == 9)
	{
		continue;
	}
	putchar(',');
	putchar(' ');
}

putchar('\n');
return (0);
}
