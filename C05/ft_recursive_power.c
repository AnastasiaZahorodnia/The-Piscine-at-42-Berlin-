/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:11:22 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/18 19:40:45 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int main(void) {
    int base, exponent;

    // Запрос ввода от пользователя
    printf("Введите основание (число): ");
    scanf("%d", &base);

    printf("Введите степень (целое число): ");
    scanf("%d", &exponent);

    // Вызов функции для вычисления степени
    int result = ft_recursive_power(base, exponent);

    // Вывод результата
    if (base == 0 && exponent < 0) 
    {
        printf("0 в отрицательной степени не определено.\n");
    }
    else 
    {
        printf("%d в степени %d равно %d\n", base, exponent, result);
    }

    return 0;
}
*/
