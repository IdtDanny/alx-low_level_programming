#include "main.h"
/**
  * rev_string - prints reversed string
  *
  * @s: parameter passed
  *
  * Return: does not return anything
  */
void rev_string(char *s)
{
	char ref = s[0];
	int x, y;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y++)
	{
		x--;
		ref = s[y];
		s[y] = s[x];
		s[x] = ref;
	}
}
