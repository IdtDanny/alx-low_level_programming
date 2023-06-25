#include "main.h"
/**
  * _isdigit - checks the digit with entered c
  *
  * @c: parameter to be printed
  *
  * Return: 1 otherwise 0
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

