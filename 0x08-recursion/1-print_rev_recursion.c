#include "main.h"
/**
  * _print_rev_recursion - prints strings in reverse using recursion
  *
  * @s: string to reverse
  *
  * Return: nothing
  */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
