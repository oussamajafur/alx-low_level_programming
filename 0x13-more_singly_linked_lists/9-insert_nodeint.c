#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: up first node in the list
 * @idx:  new node is added
 * @n: insert to a new node
 *
 * Return:  new node NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int o;
listint_t *new;

listint_t *temp = *head;

new = malloc(sizeof(listint_t));

if (!new || !head)
return (NULL);

new->n = n;
new->next = NULL;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

for (o = 0; temp && o < idx; o++)
{
if (o == idx - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
else
temp = temp->next;
}

return (NULL);
}

