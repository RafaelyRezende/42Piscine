/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 09:01:17 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/07 09:27:20 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("FACTORIAL ---> %d", ft_recursive_factorial(atoi(argv[1])));
}
*/
