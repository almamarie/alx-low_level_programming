
/**
 * _memset - entry point
 * Return: a pointer to the memory area s
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes to fill
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
