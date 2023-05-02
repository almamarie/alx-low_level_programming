#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the elements in a list
 * @h: the linkedlist
 * Return: the size of the list
*/

size_t print_listint(const listint_t *h)
{
size_t size;

size = 0;

while (h != NULL)
{
printf("%u\n", h->n);
size++;
h = h->next;
}

return (size);
}
