#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **you;
	int m, s;

	if (width <= 0 || height <= 0)
		return (NULL);

	you = malloc(sizeof(int *) * height);

	if (you == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		you[m] = malloc(sizeof(int) * width);

		if (you[m] == NULL)
		{
			for (; m >= 0; m--)
				free(you[m]);

			free(you);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (s = 0; s < width; s++)
			you[m][s] = 0;
	}

	return (you);
}
