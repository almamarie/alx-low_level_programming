#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 * Description: prints the size of various types
 */

int main(void)
{
int char_size = sizeof(char);
int int_size = sizeof(int);
int long_int_size = sizeof(long int);
int long_2_int = sizeof(long long int);
int float_size = sizeof(float);
printf("Size of a char is: %d byte(s)\n", char_size);
printf("Size of an int is: %d byte(s)\n", int_size);
printf("Size of a long int is: %d byte(s)\n", long_int_size);
printf("Size of a long long int is: %d byte(s)\n", long_2_int);
printf("Size of a float is: %d byte(s)\n", float_size);
return (0);
}
