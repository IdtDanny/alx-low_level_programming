#include <stdio.h>
/**
  * main - arguments passed
  *
  * @argc: argument count
  *
  * @argv: argument string passed
  *
  * Return: always 0
  */
int main(int argc, char *argv[])
{
	argc -= 1;
	if (argv[argc])
	{
		printf("%d\n", argc);
	}
	return (0);
}
