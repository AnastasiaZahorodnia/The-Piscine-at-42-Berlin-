/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:55:32 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/08 14:25:10 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	if ((s1[i] == '\0') && (s2[i] == '\0'))
		return (0);
	else if (s1[i] == '\0')
		return (-1);
	else
		return (1);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "abcdef";
	str2 = "abcdef";
	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n", ft_strcmp(str2, str2));
}
*/
