/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 21:12:13 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/03 22:16:45 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	buffer;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (*(tab + i) > *(tab + i + 1))
			{
				buffer = *(tab + i);
				*(tab + i) = *(tab + i + 1);
				*(tab + i + 1) = buffer;
			}
			i++;
		}
		j++;
	}
}
