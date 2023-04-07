#include "main.h"

/**
 * _pow_recursion - returns the value of c raised to the power of v.
 * @c: value to raise
 * @v: power
 * Return: result  of the power
 */
int _pow_recursion(int c, int v)
{
	if (v < 0)
                return (-1);
	if (v == 0)
		return (1);	
	return (c * _pow_recursion(c, v - 1));
}                  		  
