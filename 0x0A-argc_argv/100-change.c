#include <stdio.h>
#include <stdlib.h>

int _calc_rem(int x, int y);
/**
  * main - prints the min nb of coins to make change for an amount of money.
  *
  * @argc: argument count
  *
  * @argv: argument string passed
  *
  * Return: always 0
  */
int main(int argc, char *argv[])
{
	int count, rem, cent;

	if (argc != 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 2)
	{
		cent = atoi(argv[1]);
		printf("%d\n", cent);
		if (cent < 0)
		{
			printf("0\n");
		}
		else
		{
			if (cent == 25 ||
					cent == 10 ||
					cent == 5 ||
					cent == 2 ||
					cent == 1)
			{
				printf("1\n");
			}
			else if (cent > 25)
				printf("%d\n", ((cent / 25) + (cent % 25)));
			else if (cent > 10 && cent < 25)
			{
				count = cent / 10;
				rem = _calc_rem(cent, 10);
				rem = _calc_rem(rem, 5);
				/* printf("%d\n%d\n", rem, count); */
				if (rem == 0)
					printf("%d\n", count);
				else if (rem == 1)
					printf("%d\n", count++);
				else if (rem == 2)
					printf("%d\n", count++);
				else if (rem == 3)
					printf("%d\n", count+2);
				else if (rem == 4)
					printf("%d\n", count+2);
			}
			else if (cent > 5 && cent < 10)
				printf("%d\n", ((cent / 5) + (cent % 5)));
			else if (cent > 2 && cent < 5)
				printf("%d\n", ((cent / 2) + (cent % 2)));
		}
	}
	return (0);
}
/**
  *  _calc_rem - calculate the remainder
  *
  * @x: cent value
  *
  * @y: exchange cent
  *
  * Return: always change
  */
int _calc_rem(int x, int y)
{
	/* int rem; */
	/* rem = x % y; */
	/* ret = _calc_rem(rem, 5); */
	return (x % y);
}
