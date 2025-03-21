/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:03:40 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/05 17:10:33 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int val;

	val = 0;
	while((*s1 || *s2) && n != 0)
	{
		val += *s1 - *s2;
		n--;
		s1++;
		s2++;
	}
	return (val);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char str[256];
	if (argc == 2)
	{
		int	i;

		i = 0;
		while (argv[1][i])
		{
			str[i] = argv[1][i];
			i++;
		}
		printf("%s\n",str);
	}
	else
	{
		return (0);
	}
}
*/
