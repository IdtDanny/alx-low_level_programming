#include "main.h"
/**
  * _sqrt_recursion - returns natural square root value
  *
  * @n: power number
  *
  * Return: the square root of n
  */
int _sqrt_recursion(int n)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
