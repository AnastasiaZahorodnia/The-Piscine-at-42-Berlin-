/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 02:42:12 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/08 18:34:03 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] - 'A' + 'a';
		}
		i++;
	}
	return (str);
}

/*
int main(void)
{
    char str1[] = "hello world!";
    char str2[] = "C programming";
    char str3[] = "123 abc DEF!";
    
    // Test the function
    printf("%s\n", ft_strlowcase(str1));
    printf("%s\n", ft_strlowcase(str2));
    printf("%s\n", ft_strlowcase(str3));
    
    return 0;
}
*/
