#include "main.h"
/**
  * _islower - checks the lowercase letters with entered c
  *
  * @c: parameter to be printed
  *
  * Return: 1 otherwise 0
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

