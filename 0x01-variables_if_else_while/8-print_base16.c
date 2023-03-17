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
	char l;
	unsigned int a;

	for (a = 0 ; a <= 9; a++)
		putchar(a, stdout);
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
