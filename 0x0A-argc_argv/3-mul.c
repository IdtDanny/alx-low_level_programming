#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * main -  multiplies two numbers.
  *
  * @argc: argument count
  *
  * @argv: argument string passed
  *
  * Return: always 0
  */
int main(int argc, char *argv[])
{
	int x, y, mul;

	argc -= 1;
	if (argc != 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 2)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		mul = x * y;
		printf("%d\n", mul);
	}
	return (0);
}
