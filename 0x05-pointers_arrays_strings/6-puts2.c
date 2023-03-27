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
	int x, y, i;
	char *ptr = str;
	
	x = 0;
	y = 0;
	while (*ptr != '\0')
{
		ptr++;
		x++;
	}
	y = x - 1;
	for (i = 0; i <= y; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
