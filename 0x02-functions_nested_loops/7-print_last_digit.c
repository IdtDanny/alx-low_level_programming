#include "main.h"
/**
  * print_last_digit - prints the last digit of number
  *
  * @x: parameter to be printed
  *
  * Return: the value of the last digit
  */
int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (x < 0)
		y = -y;
	_putchar(y + '0');
	return (y);
}

