/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltoscani <ltoscani@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:50:49 by ltoscani          #+#    #+#             */
/*   Updated: 2024/10/11 19:57:49 by ltoscani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Handles program's entry point and manages input
#include <unistd.h>
#include <stdlib.h>

//Declare functions from other files
int		**create_grid(void);
void	free_resources(int **grid, int *clues);
int		*parse_clues(char *str);
int		solve(int **grid, int *clues);
void	print_grid(int **grid);

void	print_error(void)
{
	write(1, "Error\n", 6);
}

void	print_grid(int **grid)
{
	int		row;
	int		col;
	char	c;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			c = grid[row][col] + '0';
			write(1, &c, 1);
			if (col < 3)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

int	main(int argc, char **argv)
{
	int	**grid;
	int	*clues;

	if (argc != 2)
	{
		print_error();
		return (1);
	}
	clues = parse_clues(argv[1]);
	if (!clues)
	{
		print_error();
		return (1);
	}
	grid = create_grid();
	if (!grid)
		return (1);
	if (!solve(grid, clues))
		print_error();
	else
		print_grid(grid);
	free_resources(grid, clues);
	return (0);
}
