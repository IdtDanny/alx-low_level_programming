#include "main.h"
/**
  * print_alphabet_x10 - prints all alphabets in small letter
  * Return: 0
  */
void print_alphabet_x10(void)
{
	int x, y;

	y = 0;

	while (y <= 9)
	{
		for (x = 97; x <= 122; x++)
			_putchar(x);
		y++;
		_putchar('\n');
	}
}

