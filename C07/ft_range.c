/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 21:17:26 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/19 22:48:20 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	ctr;

	if (min >= max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (max - min));
	if (!arr)
		return (NULL);
	ctr = 0;
	while ((min + ctr) < max)
	{
		arr[ctr] = min + ctr;
		ctr++;
	}
	return (arr);
}
/*
int	main(void)
{
	int	*arr;
	int	i;
	arr = ft_range(3, 8);
	if (arr != NULL)
	{
		for (i = 0; i < 8 - 3; i++)
			printf("%d\n", arr[i]);
		free(arr);
	}
	else
		printf("Invalid range\n");
	return (0);
}
*/
