/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:06:58 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/05 21:55:24 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
/*
int	main(void)
{
	int	g;
	char	*str;

	str = "Some\0";
	g = ft_strlen(str);

	char	n;

	n = g + '0';
	write(1, &n, 1);
}
*/
