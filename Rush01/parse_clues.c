/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_clues.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltoscani <ltoscani@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:32:40 by ltoscani          #+#    #+#             */
/*   Updated: 2024/10/12 15:36:43 by ltoscani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//This file handles parsing the input string of clues, converting it 
// into an array of integers.

#include <stdlib.h>

int	*parse_clues(char *str)
{
	int	*clues;
	int	i;
	int	pos;

	clues = (int *)malloc(16 * sizeof(int));
	if (!clues)
		return (NULL);
	i = 0;
	pos = 0;
	while (i < 16)
	{
		if (str[pos] >= '1' && str[pos] <= '4')
			clues[i++] = str[pos] - '0';
		else if (str[pos] != ' ')
			return (NULL);
		pos++;
	}
	return (clues);
}
