/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 11:17:24 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/01 12:31:35 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	main(int argc, char **argv)
{
	if (argc <= 1)
	{
		return (0);
	}
	printf("%s\n", argv[1]);
	printf("%s\n", argv[2]);
	
	char	buffer[256] = "aaaaaaaaaaaaaaaaaaa";  
	//int	cnt;

	/*
	cnt = 0;
	while (argv[1][cnt] != '\0')
	{
		buffer[cnt] = argv[1][cnt];
		cnt++;
	}
	buffer[cnt + 1] = '\0';

	// Argv[1] is destination, argv[2] is source
	printf("%s", ft_strcat(&buffer[0],argv[2]));
	*/
	printf("-----------------\n");
	printf("%s", ft_strcat(&buffer[0], &argv[2][0]));
	return (0);
}
