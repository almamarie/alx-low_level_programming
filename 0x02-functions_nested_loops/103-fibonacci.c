#include <stdio.h>
/**
 * main - entry point
 * Return: void
 * description: adds two numbers
*/

int main(void)
{
int prev = 1;
int curr = 1;
long fib;
int counter = 0;
printf("1, ");
while(counter < 50)
{
fib = prev + curr;
printf("%lu", fib);
if (counter + 1 < 50)
{
printf(", ");
}
prev = curr;
curr = fib;
counter++;
}
printf("\n");
return (0);
}
