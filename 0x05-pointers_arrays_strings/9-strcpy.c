#include "main.h"
#include <stdio.h>
/**
  * *_strcpy - copy string pointed to by src
  *
  * @dest: parameter passed
  *
  * @src: parameter passed
  *
  * Return: return pointer
  */
char *_strcpy(char *dest, char *src)
{
	int i, x;

	i = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (x = 0; x < i; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
