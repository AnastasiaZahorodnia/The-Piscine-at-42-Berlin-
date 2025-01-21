/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:41:48 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/02 18:48:24 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

/*
#include <stdio.h>

int	main(void) {
	ft_is_negative(-5); // Should print 'N'
    	ft_is_negative(0);  // Should print 'P'
    	ft_is_negative(3);  // Should print 'P'
    	return 0;
}
*/
