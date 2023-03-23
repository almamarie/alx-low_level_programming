#include <stdio.h>

/**
 * main - main block
 * Description: Find and print the largest prime factor of the number
 * 612852475143
 * Return: 0
 */

int main(void)
{
long int n;
long int div = 2;
long int maxFact;

n = 612852475143;

while (n != 0)
{
if (n % div != 0)
div = div + 1;
else
{
maxFact = n;
n = n / div;
if (n == 1)
{
printf("%ld is the largest prime factor !", maxFact);

break;
}
}
}
return (0);
}
