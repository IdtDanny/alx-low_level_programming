#include "main.h"
/**
  * *_strpbrk - searches a string for any set of bytes
  *
  * @s: parameter passed
  *
  * @accept: parameter passed
  *
  * Return: return pointer to the byte in s
  */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
