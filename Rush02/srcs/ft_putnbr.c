/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:12:33 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/20 21:26:07 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush02.h"

void	ft_putnbr(int nb)
{
	unsigned int	res;

	res = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		res = -nb;
	}
	if (res <= 9)
	{
		ft_putchar(res + 48);
	}
	if (res >= 10)
	{
		ft_putnbr(res / 10);
		ft_putnbr(res % 10);
	}
}
