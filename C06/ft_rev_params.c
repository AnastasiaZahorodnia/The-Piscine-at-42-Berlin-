/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:47:57 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/16 20:52:09 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = ac - 1;
	while (i >= 1)
	{
		j = 0;
		while (av[i][j])
			j++;
		write(1, av[i], j);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
