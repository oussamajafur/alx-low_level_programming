#include "main.h"

  /**
   * _pow_recursion - returns the value of c raised to the power of v.
   * @c: base.
   * @v: exponent.
   * Return: value of the exponentiation.
   */
  int _pow_recursion(int c, int v)
  {
	  if (v < 0)
		return (-1);
	  else if (v == 0)
		  return (1);
	  else
		  return (c * _pow_recursion(c, v - 1));
  }                  		  
