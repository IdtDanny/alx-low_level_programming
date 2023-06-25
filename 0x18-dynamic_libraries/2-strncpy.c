#include "main.h"
#include <stdio.h>
/**
  * *_strncpy - copy string pointed to by src
  *
  * @dest: parameter passed
  *
  * @src: parameter passed
  *
  * @n: parameter for limited byte to copy
  *
  * Return: return pointer
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
