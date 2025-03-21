/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:25:03 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/01 13:01:12 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int cnt;

	cnt = 0;
	
	while (cnt < n && *src != '\0')
	{
		dest[cnt] = src[cnt];
		cnt++;
	}
	
	while (cnt < n)
	{
		dest[cnt] = '\0';
	}
	
	return dest;
}
/*
#include <stdio.h>

int	main()
{
	char this = "banana";
	char buffer[256];

	buffer = {0};
*/
