#include "main.h"

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: the height of the array
 * Return: pointer to a 2 dimensional array
*/

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free(array);
			for (j = 0; j <= height; j++)
			{
				free(array[j]);
			}
			
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}

	}
	return (array);
}
