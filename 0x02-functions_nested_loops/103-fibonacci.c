#include <stdio.h>
/**
 * main - entry point
 * Return: void
 * description: prints sum of even fibonacci numbers
*/

int main(void)
{

unsigned long acc = 0;
int i;
long fib[35];
fib[0] = 1;
fib[1] = 2;
for (i = 2; i < 35; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}

for (i = 0; i < 35; i++)
{
if ((fib[i] < 4000000) && (fib[i] % 2 == 0))
{
acc += fib[i];

}
}





printf("%lu\n", acc);

return (0);
}
