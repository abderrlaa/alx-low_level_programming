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
	int *array1, *array2;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array1 = malloc(sizeof(int) * width);
	if (array1 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		array1[i] = 0;
	}

	array2 = malloc(sizeof(int) * height);
	if (array2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		height[i] = 0;
	}

	array = malloc(sizeof(int *) * 2);
	array[0] = array1;
	array[1] = array2;

	return (array);
}
