/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 02:33:46 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/08 18:32:43 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
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

    printf("%s\n", ft_strupcase(str1)); // Output: "HELLO WORLD!"
    printf("%s\n", ft_strupcase(str2)); // Output: "C PROGRAMMING"
    printf("%s\n", ft_strupcase(str3)); // Output: "123 ABC DEF!"

    return (0);
}
*/
