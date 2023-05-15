#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid- function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: poniter to 2 dim.array
 */
int **alloc_grid(int width, int height)
{
	int **mal;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	mal = malloc(sizeof(int *) * height);

	if (mal == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		mal[i] = malloc(sizeof(int) * width);

		if (mal[i] == NULL)
		{
			for (; i >= 0; i--)
				free(mal[i]);
			free(mal);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			mal[i][j] = 0;
	}
	return (mal);
}
