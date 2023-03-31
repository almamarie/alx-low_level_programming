
#include "main.h"
#include <stdio.h>

/**
 * rot13 - entry point
 * Return: *s
 * @s: string input
 */

char *rot13(char *s)
{
	int i;
	int j;
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alp[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
