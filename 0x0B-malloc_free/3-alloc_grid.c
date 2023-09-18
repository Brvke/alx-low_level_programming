#include "main.h"
/**
* alloc_grid - allocates a 2d array of height and width
*
* @width: width of 2d array
* @height: height of 2d array
*
* Return: a 2d array or null if both hetght and width are 0
*/
int **alloc_grid(int width, int height)
{
	int i, k;
	int **j;

	if (width <= 0)
		return (NULL);
	else if (height <= 0)
		return (NULL);
	j = malloc(height * sizeof(int *));
	if (j == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		j[i] = (int *)malloc(width * sizeof(int));
		if (j[i] == NULL)
		{
			while (i >= 0)
			{
				free((j[i]));
				i--;
			}
			free(j);
			return (NULL);
		}
		for (k = 0; k < width; k++)
			j[i][k] = 0;
	}
	return (j);
}
