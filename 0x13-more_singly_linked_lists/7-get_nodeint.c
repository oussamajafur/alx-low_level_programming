#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: up  node in  linked list
 * @index:  to return
 *
 * Return: node we're looking  or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int o = 0;
listint_t *temp = head;

while (temp && o < index)
{
temp = temp->next;

o++;
}

return (temp ? temp : NULL);
}

