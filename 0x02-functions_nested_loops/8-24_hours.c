#include "main.h"
/**
  * jack_bauer - prints time of jack_bauer
  *
  * Return: 0
  */
void jack_bauer(void)
{
	int x, y;

	x = 0;

	while (x <= 23)
	{
		for (y = 0; y <= 59; y++)
		{
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			_putchar(':');
			_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
			_putchar('\n');
		}
		x++;
	}
}

