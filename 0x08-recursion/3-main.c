#include "main.h"
#include <stdio.h>

 /**
  * main - check the code
  *
  * Return: Always 0.
  */
 int main(void)
 {
	 int j;

	 j = factorial(1);
	 printf("%d\n", j);
	 j = factorial(5);
	 printf("%d\n", j);
	 j = factorial(10);
	 printf("%d\n", j);
	 j = factorial(-1024);
	 printf("%d\n", j);
	 return (0);
 }
