#include "main.h"
/**
 * times_table - entry point
 * Return: void
 * description: prints the 9 times table
*/
void times_table(void)
{
int time;
int current_num;
int multiple;
int first_number;

for (time = 0; time < 10; time++)
{
_putchar('0');
for (current_num = 1; current_num < 10; current_num++)
{
multiple = (current_num * time);
first_number = multiple / 10;
if (multiple < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((multiple)+'0');
}
else
{
if ((current_num) < 10)
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
