#include "main.h"
/**
  * puts2 - prints every 2 content of a string
  *
  * @str: parameter passed
  *
  * Return: does not return anything
  */
void puts2(char *str)
{
	int x;

	x = 0;
	while (*str != '\0')
	{
		x++;
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
