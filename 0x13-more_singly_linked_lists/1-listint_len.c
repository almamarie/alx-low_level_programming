#include "lists.h"
#include <stdio.h>

/**
 * listint_len - finds the size of a linkedlist
 * @h: the linkedlist
 * Return: the size of the list
*/

size_t listint_len(const listint_t *h)
{
size_t size;

size = 0;

while (h)
{
size++;
h = h->next;
}

return (size);
}
