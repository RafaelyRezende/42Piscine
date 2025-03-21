/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 08:16:02 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/06 08:26:08 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char**argv)
{
	int	i;
	int	j;

	if (argc > 1)
	{
		i = 0;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				ft_write(argv[i][j]);
				j++;
			}
			ft_write('\n');
			i++;
		}
	}
}
