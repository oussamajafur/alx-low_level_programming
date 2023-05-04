#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @o: search
 * @index: the bit
 *
 * Return: bit
 */
int get_bit(unsigned long int o, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (o >> index) & 1;

	return (bit_val);
}

