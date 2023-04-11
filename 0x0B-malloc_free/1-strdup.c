#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: passed string
 *
 * Return: pointer or NULL
 *
 */
char *_strdup(char *str)
{
	char *ptr;
		
	int i, x;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;	
	while (str[i] != '\0')
	{
		i++;
	}
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x]; x++)
	{
		ptr[x] = str[x];
	}
	return (ptr);
}
