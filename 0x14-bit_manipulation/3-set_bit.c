#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @o: pointer to change number
 * @index: bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *o, unsigned int index)
{
	if (index > 63)
		return (-1);

	*o = ((1UL << index) | *o);
	return (1);
}

