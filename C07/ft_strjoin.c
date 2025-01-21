/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 23:17:04 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/19 00:10:17 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*inv_size(void)
{
	char	*result;

	result = malloc(1);
	if (result)
		result[0] = '\0';
	return (result);
}

int	find_size(int size, char **strc, char *sep)
{
	int	total_l;
	int	sep_l;
	int	i;

	total_l = 0;
	sep_l = ft_strlen(sep);
	i = 0;
	while (i < size)
	{
		total_l += ft_strlen(strc[i]);
		if (i < size - 1)
			total_l += sep_l;
		i++;
	}
	return (total_l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		total_l;
	int		sep_l;

	total_l = 0;
	sep_l = ft_strlen(sep);
	if (size == 0)
		return (inv_size());
	i = 0;
	total_l = find_size(size, strs, sep);
	result = malloc(total_l + 1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcpy(result + ft_strlen(result), strs[i]);
		if (i < size - 1)
			ft_strcpy(result + ft_strlen(result), sep);
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	char	*strs[] = {"Hello", "World", "42"};
	char	*sep = ", ";
	char	*result;

	result = ft_strjoin(3, strs, sep);

	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	else
	{
		printf("error\n");
	}
	return (0);
}
*/
