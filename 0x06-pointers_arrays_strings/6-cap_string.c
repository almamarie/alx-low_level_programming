/**
 * cap_string - entry point
 * Return: char *
 * @a: input array
 * description: capitalizes a string
*/


char *cap_string(char *a)
{
int i;


i = 0;
while (a[i] != '\0')
{
i++;
while (a[i] > 96 && a[i] < 123){
        if (a[i - 1] == ' ' ||
		    a[i - 1] == '\t' ||
		    a[i - 1] == '\n' ||
		    a[i - 1] == ',' ||
		    a[i - 1] == ';' ||
		    a[i - 1] == '.' ||
		    a[i - 1] == '!' ||
		    a[i - 1] == '?' ||
		    a[i - 1] == '"' ||
		    a[i - 1] == '(' ||
		    a[i - 1] == ')' ||
		    a[i - 1] == '{' ||
		    a[i - 1] == '}' ||
		    i == 0)
            {

a[i] -= 32;
}
i++;
}


}

return (a);
}
