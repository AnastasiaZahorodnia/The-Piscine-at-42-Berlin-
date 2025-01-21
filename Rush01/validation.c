/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltoscani <ltoscani@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:25:57 by ltoscani          #+#    #+#             */
/*   Updated: 2024/10/12 15:32:25 by ltoscani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This file contains the validation logic
// ensuring that the puzzle follows the rules. 
//It will check uniqueness of numbers in rows and columns.

int	is_unique_in_row(int **grid, int row, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num)
			return (0);
		i++;
	}
	return (1);
}

int	is_unique_in_col(int **grid, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	is_valid(int **grid, int row, int col, int num)
{
	return (is_unique_in_row(grid, row, num)
		&& is_unique_in_col(grid, col, num));
}
