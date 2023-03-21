#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;
    char c;

    r = _islower('H');
    print("");
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');

    _putchar('\n');
    return (0);
}


