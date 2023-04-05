#include "main.h"

int find_sqrt(int x, int key);
/**
  * _sqrt_recursion - returns natural square root value
  *
  * @n: number to find square root for
  *
  * Return: the square root of n
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 0));
}

/**
  * find_sqrt - recurses to find natural square root value of x
  *
  * @x: number to calculate square root for
  * @key: iteration
  *
  * Return: the square root of n
  */
int find_sqrt(int x, int key)
{
	if (key * key > x)
	{
		return (-1);
	}
	if (key * key == x)
	{
		return (key);
	}
	return (find_sqrt(x, key + 1));
}
