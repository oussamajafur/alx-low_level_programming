#include "lists.h"
/**
 * print_listint: print all the elements.
 *
 * @o: list of type listint_t.
 *
 * Return: node number
 */
size_t print_listint(const listint_t *o)
{
size_t num = 0;

while (o)
{
printf("%d\n", o->n);

num++;

o = o->next;
}
return (num);
}

