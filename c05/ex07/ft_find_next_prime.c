/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:24:29 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/05 20:25:51 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_find_next_prime(int nb)
{
	int	x;
	int	flag;

	x = 2;
	flag = 1;
	while (x < nb && flag)
	{
		if (nb % x == 0)
			flag = 0;
		x++;
	}
	if (flag)
		return (nb);
	while (!flag)
	{
		x = 2;
		while (x < nb)
		{
			if (nb % x == 0)
				nb++;
			x++;
		}
		++flag;
	}
	return (nb);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%d", ft_find_next_prime(atoi(argv[1])));
}
*/
