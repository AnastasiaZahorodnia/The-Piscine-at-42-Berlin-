/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:22:43 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/08 14:52:39 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	if (i == n)
		return (0);
	if (s1[i] == '\0' && s2[i] == '\0')
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

	str1 = "abcdef123";
	str2 = "abcdef";
	printf("%d\n", ft_strncmp(str1, str2, 6));
	printf("%d\n", ft_strncmp(str1, str2, 5));
	printf("%d\n", ft_strncmp(str1, str2, 7));
}
*/
