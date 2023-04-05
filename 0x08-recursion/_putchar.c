#include<unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 * Return: returns 0 on success and -1 on failure
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
