/**
 * cap_string - entry point
 * Return: char *
 * description: capitalizes a string
 * @a: input array
*/


char *cap_string(char *a)
{
int i;

i = 0;

// is first character -> is letter -> 

while(a[i] != '\0')
{
/**
 * is first character
 * */
if (i == 0 || a[i -1] == ' ' || a[i-1] == '\t' || a[i-1] == '\n' || a[i-1] == ',' || a[i-1] == ';' || a[i-1] == '.' || a[i-1] == '!' || a[i-1] == '?' || a[i-1] == '"' || a[i-1] == '(' || a[i-1] == ')' || a[i-1] == '{' || a[i-1] == '}')
{

/**
 * is a letter
 * */

if (a[i] > 96 && a[i] < 123 )
{
    a[i] = a[i] - 32;
}
}

i++;
    
}

return (a);
}
