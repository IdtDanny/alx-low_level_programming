#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
  * main - checks 0, + and -
  * Return: 0
  */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	/* your code goes there */
	if (n > 5)
		printf("Last digit of %d is %d greater than 5\n", n, last_digit);
	else if ((n < 6) && (n != 0))
		printf("Last digit of %d is %d less than 6 and not 0\n", n, last_digit);
	else
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	return (0);
}
