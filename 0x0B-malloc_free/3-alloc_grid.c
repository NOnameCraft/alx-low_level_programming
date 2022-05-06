#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a two dimensional array of integer
 * @width: argument
 * @height: argument
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		p = (int **) malloc(height * sizeof(int *));
		/* we have to make a malloc per pointer*/
		if (!p)
		{
			free(p);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			p[i] = (int *) calloc(width ,sizeof(int));
			if (!p[i])
			{
				for (j = 0; j <= i; j++)
					free(p[j]);
				free(p);
				return (NULL);
			}
		}
		return (p);
	}
}