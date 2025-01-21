/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 02:13:21 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/08 00:41:01 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] > 126))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_printable("Hello"));
	printf("%d\n", ft_str_is_printable("Hello, World!"));
	printf("%d\n", ft_str_is_printable("Hello\n"));
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("Hello\tWorld"));
	printf("%d\n", ft_str_is_printable("Printable123"));
	printf("%d\n", ft_str_is_printable("Hello\x01"));
	return (0);
}
*/
