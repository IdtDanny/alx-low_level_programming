#include "main.h"
/**
  * _strspn - gets the length of prefix substring
  *
  * @s: parameter passed
  *
  * @accept: parameter passed
  *
  * Return: return number of bytes in initial segment of s
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				n++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
