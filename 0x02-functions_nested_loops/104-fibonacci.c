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

printf("%.0Lf", fib);
if (i != 98)
{
printf(", ");
}
}

printf("\n");
return (0);
}
