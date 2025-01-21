/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:09:33 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/02 20:16:00 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
int main()
{
    int x = 5;
    int y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);

    ft_swap(&x, &y); // Pass the addresses of x and y to the swap function

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
} 
*/
