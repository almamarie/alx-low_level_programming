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
char tmp_16;
for (al = 0; al <= 9; al++)
{
	putchar(48 + al);
}
for (tmp_16 = 'a'; tmp_16 <= 'f'; tmp_16++)
{
	putchar(tmp_16);
}

putchar('\n');
return (0);
}
