/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 00:38:24 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/08 19:24:02 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((!(str[i] >= 'A' && str[i] <= 'Z'))
			&& (!(str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
    printf("%d\n", ft_str_is_alpha("Hello")); // Output: 1
    printf("%d\n", ft_str_is_alpha("Hello123")); // Output: 0
    printf("%d\n", ft_str_is_alpha("")); // Output: 1
    return 0;
}
*/
