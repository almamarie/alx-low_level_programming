

/**
 * print_name - prints a character
 * @name: string to print
 * @f: function to use to print string
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
{
return;
}
f(name);
}
