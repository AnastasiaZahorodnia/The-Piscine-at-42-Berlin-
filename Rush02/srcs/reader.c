/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:14:10 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/20 23:42:01 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush02.h"

char	*add(char **str)
{
	char	*add;
	int		i;
	int		len;

	len = 0;
	while ((*str)[len])
		len++;
	add = malloc(sizeof(char) * (len + 2));
	if (add == NULL)
		return (NULL);
	add[len + 1] = '\0';
	i = 0;
	while (i < len)
	{
		add[i] = (*str)[i];
		i++;
	}
	free(*str);
	return (add);
}

char	*reader(char *filename)
{
	int			fd;
	char			*str;
	char			*new_str;
	int			i;
	int			r;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);
	str = malloc(sizeof(char) * 1);
	new_str = add(&str);
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	i = 0;
	while (1)
	{
		r = read(fd, str + i, 1);
		if (r <= 0)
			break ;
		if (new_str == NULL)
			return (NULL);
		str = new_str;
		i++;
	}
	str[i] = '\0';
	close(fd);
	return (str);
}
