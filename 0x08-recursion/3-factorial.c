#include "main.h"
/**
  * factorial - returns factorial of given number
  *
  * @n: number to print factorial
  *
  * Return: the factorial of n
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
