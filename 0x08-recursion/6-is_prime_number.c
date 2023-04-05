/**
 * is_prime - check if input is prime
 * @n: input number
 * @v: iterator
 * Return: (1) if true else (0)
*/


int is_prime(int n, int v)
{

if (v <= 1)
{
return (1);
}

if (n % v == 0)
{
return (0);
}

return (is_prime(n, v - 1));
}

/**
 * is_prime_number - check if input is prime
 * @n: input number
 * Return: (1) if true else (0)
*/

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (is_prime(n, n - 1));

}
