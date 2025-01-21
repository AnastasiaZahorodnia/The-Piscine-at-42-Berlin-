/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:58:20 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/15 17:16:28 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	int	n;

	printf("Enter a number: ");
	scanf("%d", &n);

	int result = ft_recursive_factorial(n);
	if (result == 0 && n < 0)
	{
		printf("Factorial is not defined for negative numbers.\n");
	}
	else
	{
		printf("Factorial of %d is %d\n", n, result);
	}
	return 0;
}
*/
