/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:26:09 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/12 13:54:46 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;
	int		len;

	i = 0;
	len = ft_len(src) + 1;
	ptr = malloc(sizeof(char) * len);
	if (!ptr)
		return (NULL);
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(int argc, char **argv)
{
	if (argc < 2)
			return (1);
	char	*str;

	str = ft_strdup(argv[1]);
	printf("%s", str);
	free(str);
}
*/
