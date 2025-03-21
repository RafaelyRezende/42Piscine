/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 09:05:53 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/01 12:59:29 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	int	cnt;

	cnt = 0;
	while (*(src + cnt) != '\0')
	{
		*(dest + cnt) = *(src + cnt);
		cnt++;
	}
	*(dest + cnt) = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char	str[] = "thisString";
	char	str2[] = "stringThat";

	printf("Source: %s\n", str2);
	printf("Destination: %s\n", str);
	printf("Output: %s", ft_strcpy(str, str2));
}
*/
