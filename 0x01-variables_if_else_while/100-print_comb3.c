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
	int x;
	int y;
	int space;

	space = 32; /* According to ASCII Table */

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if ((x != y) && (x < y))
			{
				putchar(x + 48);
				putchar(y + 48);
				if ((x + y) != 17)
				{
					putchar(',');
					putchar(space);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
