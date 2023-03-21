#include <stdio.h>
#include "main.h"
/**
  * print_to_98 - prints sum of two numbers
  *
  * @n: parameter passed to function
  *
  * Return: 0
  */
void print_to_98(int n)
{
	int x;

	if (n >= 0 && n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			if (x != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
		printf("%d", n);
}
