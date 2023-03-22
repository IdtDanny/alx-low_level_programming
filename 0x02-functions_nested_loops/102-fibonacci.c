#include <stdio.h>
#include <stdlib.h>
/**
  * main - fibonacci sequence below 50
  * Return: 0
  */
int main(void)
{
	int x, y, z;

	y = 1;
	z = 2;

	for (x = 0; x < 50; x++)
	{
		if (x == 0)
		{
			printf("%d", y);
		}
		else if (x == 1)
		{
			printf(", %d", z);
		}
		else
		{
			z = z + y; /* Adding first two numbers */
			y = z - y; /* finding number before */
			printf(", %d", z);
		}
	}
	printf("\n");
	return (0);
}
