#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
  * main - prints alphabets in lower case
  * Return: 0
  */
int main(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		putchar(i + 48); /* ASCII Table ref for 0-9 (48-57) */
		i++;
	}
	putchar('\n');
	return (0);
}
