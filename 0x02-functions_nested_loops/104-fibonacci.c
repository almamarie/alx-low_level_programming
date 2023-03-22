#include <stdio.h>
/**
 * main - entry point
 * Return: void
 * description: prints the first 98 fibonacci numbers
*/

int main(void)
{
int i;
unsigned long int fib;
unsigned long int prev = 1;
unsigned long int curr = 2;

printf("1, 2, ");

for (i = 2; i < 99; i++)
{
fib = prev + curr;
prev = curr;
curr = fib;

printf("%lu", fib);
if (i != 98)
{
printf(", ");
}
}



printf("\n");
return (0);
}
