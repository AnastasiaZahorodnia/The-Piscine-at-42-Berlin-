/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:04:13 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/15 13:57:18 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	divisior;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	divisior = 1;
	while (nb / divisior >= 10)
	{
		divisior *= 10;
	}
	while (divisior > 0)
	{
		ft_putchar((nb / divisior) + '0');
		nb %= divisior;
		divisior /= 10;
	}
}
/*
int	main(void)
{
	ft_putnbr(606009);
}
*/
