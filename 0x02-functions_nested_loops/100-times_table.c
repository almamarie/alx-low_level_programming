#include <stdio.h>
/**
 * print_times_table - entry point
 * Return: void
 * @n: an integer input
 * description: prints the times table of the input
*/
void print_times_table(int n)
{
int time;
int current_num;
int multiple;
// int first_number;

if(n < 0 || n > 15)
{
printf("\n");
return;
}

for (time = 0; time <= n; time++)
{
printf("0");
for (current_num = 1; current_num <= n; current_num++)
{
multiple = (current_num * time);
// first_number = multiple / 10;
if (multiple < 10)
{
printf(",   ");
printf("%d", multiple);
}

if (multiple < 100)
{
printf(",  ");
printf("%d", multiple );
}
else
{
if ((current_num) < (n + 1))
{
printf(", ");
}
printf("%d", multiple );
// printf("%d", (multiple % 10)) ;
}
}
printf("\n");
}
}
