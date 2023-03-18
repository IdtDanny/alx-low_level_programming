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
	int space;

	space = 32; /* According to ASCII Table */

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48); /* ASCII Table ref for 0-9 (48-57) */
		putchar(space);
		putchar(',');
	}
	putchar('\n');
	return (0);
}
