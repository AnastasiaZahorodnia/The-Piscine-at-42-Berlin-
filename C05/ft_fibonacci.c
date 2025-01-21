/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:23:19 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/15 21:29:02 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
int main(void) {
    int index;

    // Запрос ввода от пользователя
    printf("Введите индекс элемента Фибоначчи: ");
    scanf("%d", &index);

    // Вызов функции для вычисления элемента Фибоначчи
    int result = ft_fibonacci(index);

    // Проверка на отрицательный индекс
    if (result == -1) {
        printf("Индекс не может быть отрицательным.\n");
    } else {
        printf("Элемент Фибоначчи с индексом %d равен %d\n", index, result);
    }

    return 0;
}
*/
