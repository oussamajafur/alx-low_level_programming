  #include "main.h"

  /**
   * _print_rev_recursion - prints a string in reverse
   *
   * @string to print
   */
  void _print_rev_recursion(char *string)
  {
	  if (*string)
          {
		  _print_rev_recursion(string + 1);
		  _putchar(*string);
	  }
  }
