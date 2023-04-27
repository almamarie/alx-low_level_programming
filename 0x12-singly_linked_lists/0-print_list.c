#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints a list
 * @h: the list to print
 * Return: the size of the 
*/

size_t print_list(const list_t *h)
{
size_t i;
struct list_s *current_list;

current_list = h->next;
i = 1;
printf("[%u] %s\n", h->len, h->str);
while (current_list != NULL)
{
i++;

if (current_list->str == NULL)
{
printf("[0] (nil)\n");
continue;
}
printf("[%u] %s\n", current_list->len, current_list->str);
current_list = current_list->next;
}

return (i);
}
