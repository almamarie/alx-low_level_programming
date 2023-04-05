/**
 * _pow_recursion - returns the power of x and y
 * @x: multiplier
 * @y: power
 * Return: integer
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}

if (y == 0)
{
return (1);
}

if (y == 1)
{
return (x);
}

return (x * _pow_recursion(x, y - 1));
}
