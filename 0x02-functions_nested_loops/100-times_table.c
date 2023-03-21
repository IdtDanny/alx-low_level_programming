#include "main.h"
/**
  * print_times_table - prints time of multiplication
  *
  * Return: 0
  */
void print_times_table(int n)
{
	int x, y, mul;
	int i, k, j;

	if (!(n < 0 || n > 15))
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				mul = x * y;
				if (mul > 99)
				{
					i = mul / 100;
					j = (mul / 10) % 10;
					k = mul % 10;
					_putchar(',');
					_putchar(32);
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(k + '0');
				}
				else if (mul > 9)
				{
					i = mul % 10;
					k = (mul - i) / 10;
					_putchar(',');
					_putchar(32);
					_putchar(32);
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
						_putchar(32);
					}
					_putchar(mul + '0');
				}
			}
			_putchar('\n');
		}
	}
}
