#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
 * add_nodeint - adds an item to the beginning
 * of a linked list
 * @head: the head of the linked list
 * @n: the new item
 * Return: pointer to the head of the list
*/


listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;
new_node->next = *head;

*head = new_node;

return (new_node);
}
