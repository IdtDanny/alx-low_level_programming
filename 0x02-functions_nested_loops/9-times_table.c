#include "main.h"
/**
  * times_table - prints time of multiplication
  *
  * Return: 0
  */
void times_table(void)
{
	int x, y, mul;
	int i, k;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			mul = x * y;
			if (mul > 9)
			{
				i = mul % 10;
				k = (mul - i) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(k + '0');
				_putchar(i + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(mul + '0');
			}
		}
		_putchar('\n');
	}
}
