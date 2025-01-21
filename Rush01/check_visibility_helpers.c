/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_visibility_helpers.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltoscani <ltoscani@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:51:27 by ltoscani          #+#    #+#             */
/*   Updated: 2024/10/12 15:56:23 by ltoscani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This file contains helper functions to check visibility 
// for each column from both directions (up and down)

int	check_col_up(int **grid, int col, int up_clue)
{
	int	max;
	int	visible;
	int	i;

	visible = 1;
	max = grid[0][col];
	i = 1;
	while (i < 4)
	{
		if (grid[i][col] > max)
		{
			max = grid[i][col];
			visible++;
		}
		i++;
	}
	return (visible == up_clue);
}

int	check_col_down(int **grid, int col, int down_clue)
{
	int	max;
	int	visible;
	int	i;

	visible = 1;
	max = grid[3][col];
	i = 2;
	while (i >= 0)
	{
		if (grid[i][col] > max)
		{
			max = grid[i][col];
			visible++;
		}
		i--;
	}
	return (visible == down_clue);
}
