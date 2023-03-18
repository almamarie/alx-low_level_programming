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
char al;
for (al = 'a'; al <= 'z'; al++)
{
	if (al == 'e' || al == 'q')
	{
		continue;
	}
	putchar(al);
}


putchar('\n');

return (0);
}
