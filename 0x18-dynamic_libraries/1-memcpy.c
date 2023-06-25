#include "main.h"
/**
  * *_memcpy - copies memory area
  *
  * @dest: parameter passed
  *
  * @src: parameter passed
  *
  * @n: parameter passed
  *
  * Return: return a pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
