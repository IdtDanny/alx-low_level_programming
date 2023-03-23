#include "main.h"
/**
  * print_diagonal - prints line instead of number
  * @n: parameters to be passed
  * Return: does not return anything
  */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= x; y++)
			{
				if (y == x)
					_putchar(92);
				else if (y < x)
					_putchar(32);
			}
			_putchar('\n');
		}
	}
}

