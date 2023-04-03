/**
 * _memcpy - copies memory specified area
 * @dest: the destination memory location
 * @src: the src memory location
 * @n: number to bytes to copy
 * Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}

