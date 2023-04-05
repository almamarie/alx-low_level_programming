/**
 * _strlen_recursion - finds the length of a given string
 * @s: string input
 * Return: length of string
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
