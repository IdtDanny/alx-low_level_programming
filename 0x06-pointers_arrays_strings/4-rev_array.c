#include "main.h"
/**
  * reverse_array - copy string pointed to by src
  *
  * @a: parameter passed
  *
  * @n: parameter passed
  *
  * Return: return nothing
  */
void reverse_array(int *a, int n)
{
	int i, x;

	for (i = 0; i < n--; i++)
	{
		x = a[i];
		a[i] = a[n];
		a[n] = x;
	}
}
