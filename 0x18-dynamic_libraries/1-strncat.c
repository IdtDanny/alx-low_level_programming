#include "main.h"
/**
  * *_strncat - concatenates two strings
  *
  * @dest: parameter passed
  *
  * @src: parameter passed
  *
  * @n: parameter for limited byte to use
  *
  * Return: return pointer
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, x;

	i = 0;
	x = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (x < n && src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
