#include <stdio.h>
/**
 * main - entry point
 * Return: void
 * description: prints the first 98 fibonacci numbers
*/

int main(void)
{
int i;
long double fib;
long double prev = 1;
long double curr = 2;

printf("1, 2, ");

for (i = 3; i < 99; i++)
{
fib = prev + curr;
prev = curr;
curr = fib;

if (i == 93 || i == 94)
{
printf("%.0Lf here ooo", fib+1);
}

else
{
printf("%.0Lf", fib);
}

if (i != 98)
{
printf(", ");
}
}

printf("\n");
return (0);
}
