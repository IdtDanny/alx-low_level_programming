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
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
		putchar('\n');
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar('\n'+alpha);
	return (0);
}
