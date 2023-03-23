#include "main.h"
/**
  * more_numbers - prints from 0 to 9 except 2 and 4
  *
  * Return: does not return anything
  */
void more_numbers(void)
{
	int x, y, f, l;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			l = y % 10; /* Last digit */
			f = 1; /* First digit for those >= 10 */

			if (y > 9)
				_putchar(f + 48);
			_putchar(l + 48);
		}
		_putchar('\n');
	}
}

