/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:09:07 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/20 20:09:27 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef RUSH02_H
# define RUSH02_H
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# define BUFF_SIZE 4096

void	rush02(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_check_rush00(char *str, int col, int line);
int		ft_check_rush01(char *str, int col, int line);
int		ft_check_rush02(char *str, int col, int line);
int		ft_check_rush03(char *str, int col, int line);
int		ft_check_rush04(char *str, int col, int line);
int		*ft_check(char *str, int line, int col);
int		ft_strlen(char *str);
void	alter_check(char *str, int line, int col, int *auth);
char	*reader(char *filename);
typedef int	(*t_fct)(char*, int, int);

#endif  /* RUSH02_H */
