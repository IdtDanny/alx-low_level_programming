#include <stdio.h>
#include <stdlib.h>
/**
  * main - fibonacci sequence for even numbers below 4000000
  * Return: 0
  */
int main(void)
{
	int x;
	long int y, z, sum;

	x = 0;
	y = 1;
	z = 2;
	sum = z;

	while (z + y < 4000000)
	{
		z = z + y;
		if (z % 2 == 0)
		{
			sum = sum + z;
			y = z - y;
		}
		++x;
	}
	printf(", %ld\n", sum);
	return (0);
}
