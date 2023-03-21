#include "main.h"
/**
  * print_sign - check the sign of entered number
  *
  * @n: parameter to be printed
  *
  * Return: 1 otherwise 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

