/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 10:47:13 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/02 13:21:40 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_cp(char *c1, char *c2)
{
	unsigned int	cnt;

	cnt = 0;
	while (c1[cnt] && c2[cnt])
	{
		if (c1[cnt] != c2[cnt])
		{
			return (0);
		}
		cnt++;
	}
	return (1);
}
char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	
	i = 0;
	if (to_find[0] == '\0')
	{
		return (&str[0]);
	}
	while (str[i] != '\0')
	{
		if (ft_cp(&str[i], &to_find[0]))
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		return (1);
	}
	printf("%s", ft_strstr(argv[1], argv[2]));
}
