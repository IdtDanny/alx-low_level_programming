#include "main.h"
/**
  * _isupper - checks the uppercase letters with entered c
  *
  * @c: parameter to be printed
  *
  * Return: 1 otherwise 0
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

