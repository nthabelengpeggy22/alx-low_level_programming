#include "main.h"
#include <stlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of int
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensiona array
 */

int **alloc_grid(int width, int height)
{
	int **index;
	int  x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	index = malloc(sizeof(int *) * height);

	if (index == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		index[x] = malloc(sizeof(int) * width);

		if (index[x] == NULL)
		{
			for (; x >= 0; x--)
				free(index[x]);

			free(index);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			index[x][y] = 0;
	}
	return (index);
}
