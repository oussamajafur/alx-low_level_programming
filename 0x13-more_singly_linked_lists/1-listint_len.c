#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists.
 * @o: linked list of type listint_t.
 *
 * Return: node number
 */
size_t listint_len(const listint_t *o)
{
size_t num = 0;

while (o)
{
num++;

o = o->next;
}
return (num);
}

