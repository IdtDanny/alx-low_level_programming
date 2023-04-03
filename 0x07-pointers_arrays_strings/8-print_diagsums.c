#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - prints the sum of the two diagonals
  *
  * @a: parameter passed
  *
  * @size: parameter passed
  *
  * Return: nothing
  */
void print_diagsums(int *a, int size)
{
	int x, num1, num2;

	num1 = 0;
	num2 = 0;
	for (x = 0; x < size; x++)
	{
		num1 = num1 + a[x];
		a = a + size;
	}
	a = a - size;
	for (x = 0; x < size; x++)
	{
		num2 = num2 + a[x];
		a = a - size;
	}
	printf("%d, %d\n", num1, num2);
}
