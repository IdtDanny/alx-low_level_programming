#include "main.h"
/**
  * puts_half - prints half content of a string
  *
  * @str: parameter passed
  *
  * Return: does not return anything
  */
void puts_half(char *str)
{
	int x, n, i;

	x = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		x++;
	}
	if (x % 2 == 0)
	{
		n = x / 2;
	}
	else
	{
		n = (x + 1) / 2;
	}
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
