#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node to the head
 * @head: pointer to the current head
 * @str: the str for the new head
 * Return: pointer to new head
*/

list_t *add_node(list_t **head, const char *str)
{
int len;
list_t *new_head;

len = 0;

while (str[len])
{
len++;
}

new_head = malloc(sizeof(list_t));

if (new_head == NULL)
{
return (NULL);
}

new_head->next = *head;
new_head->str = strdup(str);
new_head->len = len;

*head = new_head;

return (*head);
}
