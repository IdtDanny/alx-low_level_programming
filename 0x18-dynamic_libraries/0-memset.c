#include "main.h"
/**
  * *_memset - fills memory with constant byte
  *
  * @s: parameter passed
  *
  * @b: parameter passed
  *
  * @n: parameter passed
  *
  * Return: return a pointer to s
  */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
