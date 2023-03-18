#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
  * main - prints alphabets in lower case
  * Return: 0
  */
int main(void)
{
	int x, y, z, space;

	space = 32; /* According to ASCII Table */

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (z = 0; z <= 9; z++)
			{
			if (x != y && x != z && y != z && x < y && y < z)
			{
				putchar(x + 48);
				putchar(y + 48);
				putchar(z + 48);
				if (x != 7 && x + z != 17)
				{
					putchar(',');
					putchar(space);
				}
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
