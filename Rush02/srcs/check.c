/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:11:27 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/20 21:24:15 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush02.h"

int	ft_check_rush00(char *str, int line, int col)
{
	int	i;

	if ((str[0] != 'o') || (str[col] != 'o')
		|| (str[(col + 2) * (line - 1)] != 'o')
		|| (str[(col + 2) * line - 2] != 'o'))
		return (0);
	i = 1;
	while (i < line - 2)
	{
		if ((str[(col + 2) * i] != '|')
			|| (str[(col + 2) * (i + 1) - 2] != '|'))
			return (0);
		i++;
	}
	i = 1;
	while (i < col)
	{
		if ((str[i] != '-') & ((str[(col + 2) * line - 2 - i] != '-')))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_rush01(char *str, int line, int col)
{
	int	i;

	if ((str[0] != '/') || (str[col] != '\\')
		|| (str[(col + 2) * (line - 1)] != '\\')
		|| (str[(col + 2) * line - 2] != '/'))
		return (0);
	i = 1;
	while (i < line - 2)
	{
		if ((str[(col + 2) * i] != '*')
			|| (str[(col + 2) * (i + 1) - 2] != '*'))
			return (0);
		i++;
	}
	i = 1;
	while (i < col)
	{
		if ((str[i] != '*') & (str[(col + 2) * line - 2 - i] != '*'))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_rush02(char *str, int line, int col)
{
	int	i;

	if ((str[0] != 'A') || (str[col] != 'A')
		|| (str[(col + 2) * (line - 1)] != 'C')
		|| (str[(col + 2) * line - 2] != 'C'))
		return (0);
	i = 1;
	while (i < line - 2)
	{
		if ((str[(col + 2) * i] != 'B')
			|| (str[(col + 2) * (i + 1) - 2] != 'B'))
			return (0);
		i++;
	}
	i = 1;
	while (i < col)
	{
		if ((str[i] != 'B') || (str[(col + 2) * line - 2 - i] != 'B'))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_rush03(char *str, int line, int col)
{
	int	i;

	if ((str[0] != 'A') || (str[col] != 'C')
		|| (str[(col + 2) * (line - 1)] != 'A')
		|| (str[(col + 2) * line - 2] != 'C'))
		return (0);
	i = 1;
	while (i < line - 2)
	{
		if ((str[(col + 2) * i] != 'B')
			|| (str[(col + 2) * (i + 1) - 2] != 'B'))
			return (0);
		i++;
	}
	i = 1;
	while (i < col)
	{
		if ((str[i] != 'B') || (str[(col + 2) * line - 2 - i] != 'B'))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_rush04(char *str, int line, int col)
{
	int	i;

	if ((str[0] != 'A') || (str[col] != 'C')
		|| (str[(col + 2) * (line - 1)] != 'C')
		|| (str[(col + 2) * line - 2] != 'A'))
		return (0);
	i = 1;
	while (i < line - 2)
	{
		if ((str[(col + 2) * i] != 'B')
			|| (str[(col + 2) * (i + 1) - 2] != 'B'))
			return (0);
		i++;
	}
	i = 1;
	while (i < col)
	{
		if ((str[i] != 'B') || (str[(col + 2) * line - 2 - i] != 'B'))
			return (0);
		i++;
	}
	return (1);
}
