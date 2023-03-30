#include <string.h>
/**
 * _strcmp - entry bpoint
 * Return: integer
 * description: concatinates 2 strings up to n bytes
 * @s1: string 1
 * @s2: string 2
*/

void reverse_array(int *a, int n)
{

// copy the string
int i;
int tmp;

for (i = 0; i < (n / 2); i++)
{
tmp = a[i];
a[i] = a[n - i -1];
a[n - i -1] = tmp;
}

}
