/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:42:59 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/09 21:10:32 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	i2;
	unsigned int	d;
	unsigned int	s;

	i = ft_strlen(dest);
	i2 = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size < 1)
		return (s + size);
	while (src[i2] && i < size - 1)
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	dest[i] = '\0';
	if (size < d)
		return (s + size);
	else
		return (d + s);
}
/*
#include <stdio.h>
int	main(void)
{
	char dest[50] = "Hello";
	char src[] = "World!";
	unsigned int size = 20;

	unsigned int result = ft_strlcat(dest, src, size);
	printf("%s\n", dest);
	printf("%u\n", result);
}
*/
