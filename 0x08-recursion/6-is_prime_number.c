#include "main.h"

int find_prime(int x, int key);

/**
  * is_prime_number - returns 1 if it is prime number
  *
  * @n: power number
  *
  * Return: 1 if prime number otherwise 0
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (find_prime(n, n - 1));
	}
}

/**
   * find_prime - making sure that its factors are only 1 and itself
   *
   * @x: passed number to check
   * @key: keypoint for evaluation
   *
   * Return: 1 if prime number otherwise 0
   */
int find_prime(int x, int key)
{
	if (key == 1)
	{
		return (1);
	}
	if (x % key == 0 && key > 0)
	{
		return (0);
	}
	return (find_prime(x, key - 1));
}
