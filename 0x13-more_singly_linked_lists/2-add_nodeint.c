#include "lists.h"

/**
 * add_nodeint - new node at the beginning of a linked list
 * @head: the first node
 * @o: insert in that new node
 *
 * Return:  NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int o)
{
listint_t *new;

new = malloc(sizeof(listint_t));

if (!new)

return (NULL);
new->n = o;

new->next = *head;

*head = new;

return (new);
}

