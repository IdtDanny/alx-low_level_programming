#include "main.h"
/**
  * print_times_table - prints time of multiplication
  * @n: parameter to be passed
  * Return: 0
  */
void print_times_table(int n)
{
	int x, y, mul;

	if (!(n < 0 || n > 15))
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				mul = x * y;
				if (mul > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((mul / 100) + '0');
					_putchar(((mul / 10) % 10) + '0');
					_putchar((mul % 10) + '0');
				}
				else if (mul > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((mul - (mul % 10)) / 10) + '0');
					_putchar((mul % 10) + '0');
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
