#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Description: a program that prints _putchar, followed by a new line.
 */

int main(void)
{
int i = 0;
char str[] = "_putchar";

while (str[i] != '\0')
{
    _putchar(str[i]);
    i++;
}
_putchar('\n');
return (0);
}
