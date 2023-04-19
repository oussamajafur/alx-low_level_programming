#include "function_pointers.h"

/**
 * function parametre on each element of an array.
 *
 *Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (action != NULL && array != NULL)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}

