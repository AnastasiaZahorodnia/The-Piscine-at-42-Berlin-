/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltoscani <ltoscani@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:20:53 by ltoscani          #+#    #+#             */
/*   Updated: 2024/10/12 15:27:09 by ltoscani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This file will handle grid creation and memory management, including
// allocating and freeing memory.

#include <stdlib.h>

int	**create_grid(void)
{
	int	**grid;
	int	i;
	int	j;

	grid = (int **)malloc(4 * sizeof(int *));
	if (!grid)
		return (NULL);
	i = 0;
	while (i < 4)
	{
		grid[i] = (int *)malloc(4 * sizeof(int));
		if (!grid[i])
			return (NULL);
		j = 0;
		while (j < 4)
			grid[i][j++] = 0;
		i++;
	}
	return (grid);
}

void	free_resources(int **grid, int *clues)
{
	int	i;

	i = 0;
	while (i < 4)
		free(grid[i++]);
	free(grid);
	free(clues);
}
