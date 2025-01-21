/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 02:05:18 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/07 23:52:33 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 'A') || (str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
    // Test cases
    printf("%d\n", ft_str_is_uppercase("HELLO"));   // Output: 1
    printf("%d\n", ft_str_is_uppercase("Hello"));   // Output: 0
    printf("%d\n", ft_str_is_uppercase("HELLO123")); // Output: 0
    printf("%d\n", ft_str_is_uppercase(""));         // Output: 1
    printf("%d\n", ft_str_is_uppercase("WORLD"));    // Output: 1
    printf("%d\n", ft_str_is_uppercase("WORLD!"));   // Output: 0
    return 0;
}
*/
