/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 18:40:51 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/02 10:47:01 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		return (0);
	}
	int	cnt = 0;
	
	ft_strncat(argv[1], argv[2],(unsigned int) atoi(argv[3])); 
	while (argv[1][cnt] != '\0')
	{
		write(1, &argv[1][cnt] , 1);
		cnt++;
	}
}
