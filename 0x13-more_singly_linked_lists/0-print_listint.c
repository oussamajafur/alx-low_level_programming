#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @o: linked list of type listint_t 
 *
 * Return: number of nodes
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

