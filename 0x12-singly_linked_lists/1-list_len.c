#include "lists.h"

/**
 * list_len - checks the size of a linkedlist
 * @h: input linkedlist
 * Return: size of @h
*/

size_t list_len(const list_t *h)
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
