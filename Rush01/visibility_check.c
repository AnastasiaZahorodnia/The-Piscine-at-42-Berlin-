/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltoscani <ltoscani@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:36:56 by ltoscani          #+#    #+#             */
/*   Updated: 2024/10/12 15:44:18 by ltoscani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This file checks the visibility constraints for each row and column, 
// ensuring the solution meets the provided rules.

//Declare helper functions
int	check_row(int *row, int left_clue, int right_clue);
int	check_col(int **grid, int col, int up_clue, int down_clue);

int	check_rows(int	**grid, int *clues)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!check_row(grid[i], clues[8 + i], clues[12 + i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_columns(int **grid, int *clues)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!check_col(grid, i, clues[i], clues[4 + i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_solution(int **grid, int *clues)
{
	if (!check_rows(grid, clues))
		return (0);
	return (check_columns(grid, clues));
}
