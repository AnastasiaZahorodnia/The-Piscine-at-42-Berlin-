/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:30:27 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/15 21:37:48 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	else
		return (0);
}
/*
#include <stdio.h>

int main(void) {
    int number;

    // Запрос ввода от пользователя
    printf("Введите число: ");
    scanf("%d", &number);

    // Вызов функции для вычисления квадратного корня
    int result = ft_sqrt(number);

    // Вывод результата
    if (result == 0 && number > 0) {
        printf("Квадратный корень числа %d является иррациональным.\n", number);
    } else {
        printf("Квадратный корень числа %d равен %d\n", number, result);
    }

    return 0;
}
*/
