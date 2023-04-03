#include "main.h"
/**
  * *_strchr - locates a character in a string
  *
  * @s: parameter passed
  *
  * @c: parameter passed
  *
  * Return: return a pointer to first occurence of char c
  */
char *_strchr(char *s, char c)
{
	int x;

	x = 0;
	for (; s[x]>='\0'; x++)
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
	}
	return (0);
}
