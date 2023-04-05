#include "main.h"
/**
  * _strlen_recursion - returns the length of string
  *
  * @s: string to reverse
  *
  * Return: nothing
  */
int _strlen_recursion(char *s)
{
	int i;
	i = 0;

	if (*s)
	{
		_strlen_recursion(s + 1);
		i++;
		if (*s != '\0')
		{
			_strlen_recursion(s + 1);
			i++;
		}
		return (i);
	}
	else
		return (0);
}
