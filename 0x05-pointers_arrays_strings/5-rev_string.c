#include "main.h"
/**
  * rev_string - prints reversed string
  *
  * @s: parameter passed
  *
  * Return: does not return anything
  */
void rev_string(char *s)
{
	int x, y;

	x = 0;
	while (*s != '\0')
	{
		x++;
		s++;
	}
	s--;
	for (y = x; y > 0; y--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
