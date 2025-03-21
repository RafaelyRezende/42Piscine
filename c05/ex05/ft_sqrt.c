/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:54:08 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/07 09:28:13 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	x;

	x = 0;
	if (nb <= 0)
		return (0);
	while (x < nb)
	{
		if (x * x > nb)
		{
			return (0);
		}
		else if (x * x == nb)
		{
			return (x);
		}
		else
		{
			x++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char**argv)
{
	if (argc != 2)
		return(1);
	int	y = atoi(argv[1]);
	printf("NUMBER ---> %d\n", y);
	printf("RETURN ---> %d\n", ft_sqrt(y));
}
*/
