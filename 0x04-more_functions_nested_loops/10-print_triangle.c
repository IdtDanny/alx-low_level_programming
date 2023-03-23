#include "main.h"
/**
  * print_triangle - prints triangle
  * @size: parameters to be passed
  * Return: does not return anything
  */
void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (y = x; y <= size; y++)
			{
				_putchar(32);
			}
			for (y = 1; y <= x; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

