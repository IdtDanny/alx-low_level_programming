#include "main.h"
/**
  * print_chessboard - prints the chessboard
  *
  * @a: parameter passed
  *
  * Return: nothing
  */
void print_chessboard(char (*a)[8])
{
	int x, y;
	int n;

	n = 8;
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
