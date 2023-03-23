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
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (0);
	else
		return (1);
}

