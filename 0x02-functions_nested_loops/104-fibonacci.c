#include <stdio.h>
#include <stdlib.h>
/**
  * main - fibonacci sequence of first 98
  * Return: 0
  */
int main(void)
{
	int x;
	unsigned long y, z;

	y = 1;
	z = 2;

	for (x = 0; x < 99; x++)
	{
		if (x == 0)
		{
			printf("%lu", y);
		}
		else if (x == 1)
		{
			printf(", %lu", z);
		}
		else
		{
			z = z + y; /* Adding first two numbers */
			y = z - y; /* finding number before */
			printf(", %lu", z);
		}
	}
	printf("\n");
	return (0);
}
