#include "main.h"
/**
  * _puts - prints string to stdout
  *
  * @str: parameter passed
  *
  * Return: does not return anything
  */
void _puts(char *str)
{
	int x;

	x = 0;
	while (*str != '\0')
	{
		x++;
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
