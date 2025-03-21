/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:12:45 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/06 13:45:49 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	val;
	int	cnt;

	sign = 1;
	val = 0;
	cnt = 0;
	while (str[cnt] == ' ' || (str[cnt] >= 7 && str[cnt] <= 13))
		cnt++;
	while (str[cnt] == '+' || str[cnt] == '-')
	{
		if (str[cnt] == '-')
			sign *= -1;
		cnt++;
	}
	while (str[cnt] >= '0' && str[cnt] <= '9')
	{
		val = val * 10 + (str[cnt] - '0');
		cnt++;
	}
	return (sign * val);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		return (1);
	}
	printf("%d", ft_atoi(argv[1]));
}
