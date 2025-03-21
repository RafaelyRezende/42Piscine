/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 08:40:59 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/06 13:41:35 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
int	main(int argc, char **argv)
{
	if (argc < 2 || argc >= 3)
	{
		return (1);
	}
	ft_putnbr (atoi(argv[1]));
}
