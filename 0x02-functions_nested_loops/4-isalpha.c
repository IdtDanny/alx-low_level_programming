#include "main.h"
/**
  * _isalpha - checks for any letters entered through parameter c
  *
  * @c: parameter to be printed
  *
  * Return: 1 otherwise 0
  */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

