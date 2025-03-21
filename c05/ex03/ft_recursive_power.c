/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 09:26:09 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/06 20:03:10 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, --power));
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	int	x = atoi(argv[1]);
	int	y = atoi(argv[2]);
	printf("BASE   --> %d\n", x);
	printf("POWER  --> %d\n", y);
	printf("RESULT --> %d\n", ft_recursive_power(x, y));
}
*/
