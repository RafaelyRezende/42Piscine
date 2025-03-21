/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_test_03.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 12:52:02 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/11 18:19:14 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	ft_len(int size, char **ss);
int	ft_sep_len(int s, char *sep);
char	*ft_fill(char *ptr, int size, char **strs, char *sep);
char	*ft_strjoin(int size, char **strs, char *sep);

int	main()
{
	char	*carr[] = {"thisstring","thatword","twat"};
	char	*separator = "-/";
	int	k = 3;
	printf("WORDS SIZE ---> %d\n", k);
	printf("WORDS LEN  ---> %d\n", ft_len(k, carr));
	printf("SEP LEN    ---> %d\n", ft_sep_len(k, separator));
	printf("OUTPUT     ---> %s\n", ft_strjoin(k, carr, separator));
	return (0);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	len;
	char	*ptr;

	len = ft_len(size, strs) + ft_sep_len(size, sep) + 1;
	ptr = malloc(sizeof(char) * len);
	if (!ptr)
	{
			ptr = malloc(1);
			*ptr = '\0';
			return (ptr);
	}
	return(ft_fill(ptr, size, strs, sep));
}

char	*ft_fill(char *ptr, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;
	int	n;

	n = 0;
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
				ptr[k++] = strs[i][j++];
		n = 0;
		if (i != (size - 1))
		{
			while (sep[n])
				ptr[k++] = sep[n++];
		}
		i++;
	}
	ptr[k] = '\0';
	return (ptr);
}

int	ft_len(int size, char **ss)
{
	int	i;
	int	j;
	int	cnt;

	cnt = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (ss[i][j])
		{
			cnt++;
			j++;
		}
		i++;
	}
	return (cnt);
}

int	ft_sep_len(int s, char *sep)
{
	int	i;
	int cnt;

	i = 0;
	cnt = 0;
	while (sep[i])
	{
		cnt++;
		i++;
	}
	return ((s - 1) * cnt);
}
