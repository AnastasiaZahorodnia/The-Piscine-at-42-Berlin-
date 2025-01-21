/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:15:31 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/10 17:34:17 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	i2 = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i2] != '\0' && i2 < nb)
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dest[50] = "Hello";
	char	src[] = "Worls";
	unsigned int	nb = 3;

	ft_strncat(dest, src, nb);
	printf("%s\n", dest);
	return (0);
}
*/
