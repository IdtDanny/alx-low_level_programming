#include <stdlib.h>
#include <stdio.h>
#include "main.h"		
/**
 * *_memset - fills memory with a constant byte.
 *
 * @str: memory area to be filled with string.
 *
 * @b: char to copy inside a memory.
 *
 * @n: number of times to copy b int memory.
 *
 * Return: pointer to the memory area str.
 */
char *_memset(char *str, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		str[x] = b;
	}
	return (str);
}
/**
 * *_calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: number of elements in the array.
 *
 * @size: size of each element.
 *
 * Return: pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
