
/**
 * _sqrt - finds the natural sqrt of @n
 * square root of a number
 * @n: the number
 * @v: the iterator
 * Return: integer
*/

int _sqrt(int n, int v)
{
if (v * v > n)
{
return (-1);
}

if (v * v == n)
{
return (v);
}

return (_sqrt(n, v + 1));
}

/**
 * _sqrt_recursion - finds the natural
 * square root of a number
 * @n: the number
 * Return: integer
*/

int _sqrt_recursion(int n)
{
if (n <= 0)
{
return (-1);
}
return (_sqrt(n, 0));
}

