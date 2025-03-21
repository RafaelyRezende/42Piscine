/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 08:43:29 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/09 15:45:49 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_stcmp(char *str1, char *str2)
{
	while (*str1 || *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int	k;

	k = 0;
	while (str[k])
	{
		write(1, &str[k], 1);
		k++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	temp = argv[1];
	i = 0;
	while (++i < argc)
	{
		j = i + 1;
		while (j < argc && argv[j] != NULL)
		{
			if (ft_stcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		ft_putstr(argv[i]);
		write(1, "\n", 1);
	}
	return (0);
}
