#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: width parameter for grid
 *
 * @height: height of grid
 *
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **ret;
	int x, y;

	if (width <= 0 || height <= 0) /* Return NULL for 0 height and width */
		return (NULL);
	ret = malloc(sizeof(int *) * height);
	if (ret == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		ret[x] = malloc(sizeof(int) * width);
		if (ret[x] == NULL)
		{
			for (; x >= 0; x--)
				free(ret[x]);
			free(ret);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ret[x][y] = 0;
	}
	return (ret);
}
