#include "main.h"
/**
  * print_most_numbers - prints from 0 to 9 except 2 and 4
  *
  * Return: does not return anything
  */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 9; x++)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x + 48);
		}
	}
	_putchar('\n');
}
