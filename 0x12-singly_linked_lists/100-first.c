#include <stdio.h>

/**
 * print_before_main - runs before main
*/

void __attribute__((constructor)) print_before_main(void)
{
printf("You're beat! and yet, you must allow,");
printf("\nI bore my house upon my back!\n");

}