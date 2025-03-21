/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:43:55 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/05 20:24:55 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("IS PRIME? ---> %d", ft_is_prime(atoi(argv[1])));
}
*/
