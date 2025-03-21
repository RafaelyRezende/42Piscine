/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 09:07:56 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/07 09:27:37 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		x *= nb;
		power--;
	}
	return (x);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	printf("%d ^ %d ---> %d", x, y, ft_iterative_power(x, y));
}
*/
