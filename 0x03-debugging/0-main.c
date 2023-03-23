#include "main.h"
#include <string.h>

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
int i;
int result;

i = 0;
result = positive_or_negative(i);

if (result == 0)
{
printf("0 is zero", result);
}

return (0);
}