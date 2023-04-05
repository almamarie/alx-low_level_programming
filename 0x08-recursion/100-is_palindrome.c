/**
 * length - finds the length of a string
 * @s: input string
 * Return: length of input string
*/


int length(char *s)
{
if (*s == '\0')
{
return 0;
}

return (1 + length(s + 1));
}


/**
 * is_palindrome - check is @s is a palindrome
 * @s: input string
 * Return: 1 true, 0 otherwise
*/

int palindrome_check(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
{
return (0);
}

if (i > len)
{
return (1);
}

return (palindrome_check(s, i + 1, len - 1));

}


/**
 * is_palindrome - check is @s is a palindrome
 * @s: input string
 * Return: 1 true, 0 otherwise
*/

int is_palindrome(char *s)
{

if (*s == 0)
{
return (0);
}
return (palindrome_check(s, 0, length(s)));
}


