/**
 * cap_string - entry point
 * Return: char *
 * @a: input array
 * description: capitalizes a string
*/


char *cap_string(char *a)
{
int i, j;

char spe[13] = {' ', '\t', '\n', ',', ';', '.',
'!', '?', '"', '(', ')', '{', '}'};

i = 0;



while (a[i] != '\0')
{

for (j = 0; j < 13; j++)
{
if (a[i - 1] == spe[j])
{
{
if (a[i] > 96 && a[i] < 123)
{
a[i] = a[i] - 32;
}
}
}
}

i++;
}

return (a);
}
