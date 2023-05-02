#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the elements in a list
 * @head: the linkedlist
 * Return: the size of the list
*/

size_t print_listint(const listint_t *head)
{
	size_t nodes = 0;

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		nodes++;
	}

	return (nodes);
}
