#include <stdarg.h>
#include <stdint.h>

/**
 * sum_them_all - adds numbers
 * @n: number of numbers to sum
 * Return: sum of input
*/

int sum_them_all(const unsigned int n, ...)
{


va_list ap;
unsigned int i, sum;

va_start(ap, n);
sum = 0;

for (i = 0; i < n; i++)
{
sum += va_arg(ap, int);
}

va_end(ap);

return (sum);

}
