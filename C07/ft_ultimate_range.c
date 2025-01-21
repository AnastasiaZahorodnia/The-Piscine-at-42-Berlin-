/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 22:34:23 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/18 23:16:28 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
/*
int	main(void)
{
	int	**arr = malloc(sizeof(int*));
	int	size;
	int	i;

	i = 0;
	size = ft_ultimate_range(arr, 3, 8);
	if (arr != NULL)
		printf("%d\n", size);
	else
		printf("Invalid");
	while (i < size)
	{
		printf("%d", arr[0][i]);
		i++;
	}
	free(arr[0]);
	free(arr);
	return (0);
}
*/	
