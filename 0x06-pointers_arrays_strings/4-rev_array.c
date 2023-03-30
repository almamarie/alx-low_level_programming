/**
 * reverse_array - entry bpoint
 * Return: integer
 * description: reverses a string
 * @a: array to reverse
 * @n: size of @a
*/

void reverse_array(int *a, int n)
{

int i;
int tmp;

for (i = 0; i < (n / 2); i++)
{
tmp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = tmp;
}

}
