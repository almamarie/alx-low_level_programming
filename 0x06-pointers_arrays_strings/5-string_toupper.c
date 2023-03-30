

/**
 * string_toupper - entry bpoint
 * Return: integer
 * description: changes a string to upper
 * @a: input array
*/


char *string_toupper(char *a)
{
int i = 0;
while (a[i] != '\0')
{
if (a[i] > 96 && a[i] < 123)
{
a[i] = a[i] - 32;
}
i++;
}

return (a);
}
