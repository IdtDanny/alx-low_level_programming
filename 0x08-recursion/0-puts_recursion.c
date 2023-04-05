#include "main.h"
/**
  * _puts_recursion - prints the given character
  *
  * @s: parameter passed
  *
  * Return: nothing
  */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
