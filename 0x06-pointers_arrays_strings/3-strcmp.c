#include "main.h"
#include <stdio.h>
/**
  * *_strcmp - copy string pointed to by src
  *
  * @s1: parameter passed
  *
  * @s2: parameter passed
  *
  * Return: return 0
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
