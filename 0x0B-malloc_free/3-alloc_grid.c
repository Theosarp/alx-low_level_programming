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
	int **bee;
	int n, m;

	if (width <= 0 || height <= 0)
		return (NULL);

	bee = malloc(sizeof(int *) * height);

	if (bee == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
	{
		bee[n] = malloc(sizeof(int) * width);

		if (bee[n] == NULL)
		{
			for (; n >= 0; n--)
				free(bee[n]);

			free(bee);
			return (NULL);
		}
	}

	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
			bee[n][m] = 0;
	}

	return (bee);
}

