#include "main.h"

/**
 * times_table - entry point
 * Return: void
 * description: prints the 9 times table
*/

void times_table(void)
{
int time;
int current_number;
int multiple;
int first_number;

for (time = 0; time < 10; time++)
{
for (current_number = 0; current_number < 10; current_number++)
{
multiple = (current_number * time);

first_number = multiple / 10;

if (first_number == 0)
{
if (((current_number) < 10) && (multiple != 0))
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar((multiple)+'0');


}
else
{
if ((current_number) < 10 && multiple != 0)
{
_putchar(',');
_putchar(' ');
}
_putchar((first_number) +'0');
_putchar((multiple % 10) + '0');


}
}
_putchar('\n');
}
}


/**
 * print_0 - entry point
 * Return: void
 * description: prints the 0 times table
*/

void print_0(void)
{
    
}