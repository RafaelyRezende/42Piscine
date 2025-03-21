/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 08:54:04 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/02/27 20:00:56 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_strcmp.c"

int	ft_atoi(char *str)
{
	int	ret;

	ret = 0;
	while(*str)
	{
		if (*str >=48 && *str <= 57)
		{
			ret = (ret * 10) + *str - 48;
		}
		else
		{
			str++;
		}
	}
	return (ret);
}

int	main(int argc, char **argv)
{
	if (argc > 3 || argc < 2)
	{
		return (-1);
	}
	
	printf("%d\n",ft_strcmp(argv[1],argv[2]));
}
