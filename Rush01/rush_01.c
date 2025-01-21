/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltoscani <ltoscani@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:45:29 by ltoscani          #+#    #+#             */
/*   Updated: 2024/10/12 14:54:50 by ltoscani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Contains core puzzle-solving functions
//Specifically the backtracking algorithm that attenpts to place
// the boxes correctly on the grid.

#include <stdlib.h>

//Declare helper functions from other files
int	is_valid(int **grid, int row, int col, int num);
int	advance_to_next(int **grid, int *clues, int row, int col);
int	check_solution(int **grid, int *clues);

int	try_number(int **grid, int *clues, int row, int col)
{
	int	num;

	num = 1;
	while (num <= 4)
	{
		if (is_valid(grid, row, col, num))
		{
			grid[row][col] = num;
			if (advance_to_next(grid, clues, row, col))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

int	backtrack(int **grid, int *clues, int row, int col)
{
	if (row == 4)
		return (check_solution(grid, clues));
	return (try_number(grid, clues, row, col));
}

int	advance_to_next(int **grid, int *clues, int row, int col)
{
	if (col == 3)
		return (backtrack(grid, clues, row + 1, 0));
	else
		return (backtrack(grid, clues, row, col + 1));
}

int	solve(int **grid, int *clues)
{
	return (backtrack(grid, clues, 0, 0));
}
