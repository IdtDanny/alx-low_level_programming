#include "main.h"
#include <stdio.h>
/**
  * *_strcat - concatenates two strings
  *
  * @dest: parameter passed
  *
  * @src: parameter passed
  *
  * Return: return pointer
  */
char *_strcat(char *dest, char *src)
{
	int i, x;

	i = 0;
	x = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
