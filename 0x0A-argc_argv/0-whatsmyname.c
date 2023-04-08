#include <stdio.h>
#include "main.h"
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
	if (argc > 1 || argc == 1)
		printf("%s\n", argv[0]); /* prints program name */
	return (0);
}
