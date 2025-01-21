/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:33:32 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/15 13:58:51 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pow_rec(int i, int n)
{
	if (n == 0)
		return (1);
	if (n == 1)
		return (i);
	return (i * ft_pow_rec(i, n - 1));
}

int	ft_atoi(char *str)
{
	long long	res;
	int			neg;
	int			i;

	i = 0;
	res = 0;
	neg = 1;
	while (*str <= 32)
		str++;
	while (*str && ((*str == '-' || *str == '+')))
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (*str && ((*str >= '0' && *str <= '9')))
		str++;
	str--;
	while ((*str >= '0' && *str <= '9'))
	{
		res += ((*str-- - '0') * ft_pow_rec(10, i++));
	}
	return ((int)(res * neg));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("1234"));        // Ожидаем 1234
	printf("%d\n", ft_atoi("-5678"));       // Ожидаем -5678
	printf("%d\n", ft_atoi("   +42"));      // Ожидаем 42
	printf("%d\n", ft_atoi("   -+12"));     // Ожидаем -12
	printf("%d\n", ft_atoi("---+15"));      // Ожидаем -15
	printf("%d\n", ft_atoi("42abc"));       // Ожидаем 42
	printf("%d\n", ft_atoi("abc-23"));      // Ожидаем 0
	printf("%d\n", ft_atoi(" h  "));         // Ожидаем 0
	printf("%d\n", ft_atoi("2147483647"));        // Ожидаем 0
	printf("%d\n", ft_atoi("-2147483648"));  // Ожидаем 1000
	return 0;
}
*/
