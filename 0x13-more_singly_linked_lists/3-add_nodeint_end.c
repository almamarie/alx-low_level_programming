#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds an item to the end of
 * a linkedlist
 * @head: the head of the linkedlist
 * @n: the item to insert
 * Return: a pointer to the new element.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *tmp = *head;

new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (tmp->next != NULL)
{
tmp = tmp->next;
}

tmp->next = new_node;

return (new_node);
}
