/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:38:18 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/11 20:59:21 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
				return (to_find);
		}
		else
			i++;
		if (str[i] != to_find[j])
			j = 0;
	}
	return (NULL);
}

int	main(void)
{
	char *ret;
	char str[] = "salut c'est cool";
	char to_find[] = "est";
	ret = ft_strstr(str, to_find);
	
	if (ret != NULL)
	       	printf("Результат: %s\n", ret); // Выводим найденную подстроку
    	else
        	printf("Подстрока не найдена\n");
	return 0;
}
