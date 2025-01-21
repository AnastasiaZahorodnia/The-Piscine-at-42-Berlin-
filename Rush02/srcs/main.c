/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anzahoro <anzahoro@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:13:54 by anzahoro          #+#    #+#             */
/*   Updated: 2024/10/20 23:39:31 by anzahoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush02.h"

int	main(int argc, char **argv)
{
	char	*buf;

	if (argc == 2) 
	{
		buf = reader("dictionary.dict");
		if (buf == NULL)
			write(1, "Dict Error\n", 11);
		return (0);
		rush02(buf);
		free(buf);
	}
	else if (argc == 3) 
	{
		buf = reader(argv[1]);
		if (buf == NULL)
			write(1, "Dict Error\n", 11);
		return (0);
		rush02(buf);
		free(buf);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
