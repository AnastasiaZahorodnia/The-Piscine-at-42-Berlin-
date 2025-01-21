/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhodak <akhodak@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 20:26:24 by akhodak           #+#    #+#             */
/*   Updated: 2024/10/06 13:06:59 by akhodak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);

int	str_to_int(char *str)
{
	int	output;
	int	digit;
	int	negative;

	digit = 0;
	output = 0;
	negative = 0;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			output *= 10;
			output += (*str - '0');
		}
		else if (*str == '-')
			negative = 1;
		else
			return (1);
		str++;
	}
	if (negative)
		output *= -1;
	return (output);
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc > 2)
	{
		x = str_to_int(argv[1]);
		y = str_to_int(argv[2]);
	}
	else if (argc == 2)
	{
		x = str_to_int(argv[1]);
		y = 1;
	}
	else
	{
		x = 1;
		y = 1;
	}
	rush00(x, y);
	rush01(x, y);
	rush02(x, y);
	rush03(x, y);
	rush04(x, y);
	return (0);
}
