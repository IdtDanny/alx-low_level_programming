#include "main.h"
/**
  * _abs - returns the absolute value of any integer
  *
  * @x: parameter to be printed
  *
  * Return: 1 otherwise 0
  */
int _abs(int x)
{
	if (x > 0)
		return (x);
	else if (x < 0)
		return (-x);
	else
		return (x);
}

