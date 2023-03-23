#include <stdio.h>

/**
 * main - entry point
 * Return: 0 on Success
 * Description: prints largest prime factor of 612852475143
 */
int main(void)
{
unsigned long num = 612852475143;
unsigned long i;
unsigned long large_prime;

for (i = 2; i <= num; i++)
{
if (num % i == 0)
{
large_prime = i;
num /= large_prime;
}
}
printf("%lu\n", large_prime);
return (0);
}
