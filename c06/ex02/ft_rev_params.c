/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 08:27:12 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/07 08:36:42 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_args(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	if (argc > 1)
	{
		while (i > 0)
		{
			ft_print_args(argv[i]);
			write(1, "\n", 1);
			i--;
		}
	}
}
