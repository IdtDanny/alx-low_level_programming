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
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + 48);
	} /* Prints 0 to 9 */
	for (a = 0; a <= 5; a++)
	{
		putchar(a + 97);
	} /* Prints a to f */
	putchar('\n');
	return (0);
}
