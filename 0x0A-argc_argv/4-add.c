#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
  * main -  adds positive numbers.
  *
  * @argc: argument count
  *
  * @argv: argument string passed
  *
  * Return: always 0
  */
int main(int argc, char *argv[])
{
	int i, num, add;

	add = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			if (num == 0)
			{
				printf("Error\n");
				add = num;
				break;
			}
			else
			{
				add += atoi(argv[i]);
			}
		}
		if (add != 0)
		{
			printf("%d\n", add);
		}
	}
	return (0);
}
