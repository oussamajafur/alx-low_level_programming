#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @o: number to change
 * @index: bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *o, unsigned int index)
{
	if (index > 63)
		return (-1);

	*o = (~(1UL << index) & *o);
	return (1);
}

