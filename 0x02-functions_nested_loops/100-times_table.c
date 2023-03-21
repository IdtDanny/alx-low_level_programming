#include "main.h"
/**
  * print_times_table - prints time of multiplication
  *
  * Return: 0
  */
void print_times_table(int n)
{
	int x, y, mul;
	int i, k;

	if (!(n < 0 || n > 15))
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');
			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');
				mul = x * y;
				if (mul <= 99 || mul <= 9)		
				{
					_putchar(' ');
				}
				else if (mul >= 100)
				{
					i = mul / 100;
					k = (mul / 10) % 10;
					_putchar(i + '0');
					_putchar(k + '0');
				}
				else if (mul <= 99 && mul >= 10)
				{
					_putchar((mul / 10) + '0');
				}
				_putchar((mul % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
