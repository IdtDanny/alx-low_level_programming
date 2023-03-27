#include "main.h"
/**
  * _strlen - prints string length
  *
  * @s: parameter passed
  *
  * Return: does not return anything
  */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
