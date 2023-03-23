#include "main.h"
/**
  * print_line - prints line instead of number
  * @n: parameters to be passed
  * Return: does not return anything
  */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}

