#include <stdio.h>
/**
 * main - entry point
 * Return: void
 * description: adds two numbers
*/

int main(void)
{
int num = 1023;
int acc = 0;
int i;

for (i = num; i > 0; i--)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
acc += i;
}
}

printf("%d\n", acc);

return (0);
}
