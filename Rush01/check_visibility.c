/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_visibility.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltoscani <ltoscani@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:44:32 by ltoscani          #+#    #+#             */
/*   Updated: 2024/10/12 15:51:12 by ltoscani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This file will define functions for checking visibility for each row 
// for both directions (left and right).

int	check_col_up(int **grid, int col, int up_clue);
int	check_col_down(int **grid, int col, int down_clue);

int	check_row_right(int *row, int right_clue)
{
	int	max;
	int	visible;
	int	i;

	visible = 1;
	max = row[3];
	i = 2;
	while (i >= 0)
	{
		if (row[i] > max)
		{
			max = row[i];
			visible++;
		}
		i--;
	}
	return (visible == right_clue);
}

int	check_row(int *row, int left_clue, int right_clue)
{
	int	max;
	int	visible;
	int	i;

	visible = 1;
	max = row[0];
	i = 1;
	while (i < 4)
	{
		if (row[i] > max)
		{
			max = row[i];
			visible++;
		}
		i++;
	}
	if (visible != left_clue)
		return (0);
	return (check_row_right(row, right_clue));
}

int	check_col(int **grid, int col, int up_clue, int down_clue)
{
	return (check_col_up(grid, col, up_clue)
		&& check_col_down(grid, col, down_clue));
}
