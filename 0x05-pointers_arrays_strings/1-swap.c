#include "main.h"
/**
  * swap_int - swap integers
  *
  * @a: pointer parameter
  *
  * @b: parameter passed
  *
  * Return: does not return anything
  */
void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
