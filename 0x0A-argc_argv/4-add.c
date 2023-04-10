#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check if there are digit in string
 *
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	unsigned int x;

	x = 0;
	while (x < strlen(str))
	{
		if (!isdigit(str[x])) /*check if str there are digit*/
		{
			return (0);
		}
		x++;
	}
	return (1);
}
/**
 * main - Print the name of the program
 *
 * @argc: Count arguments
 *
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x;
	int str_to_int;
	int sum = 0;

	x = 1;
	while (x < argc)
	{
		if (check_num(argv[x]))
		{
			str_to_int = atoi(argv[x]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		x++;
	}
	printf("%d\n", sum); /*print sum*/
	return (0);
}
