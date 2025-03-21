/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:55:05 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/12 14:15:37 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (size <= 0)
	{
		ptr = NULL;
		return (ptr);
	}
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
	{
		ptr = NULL;
		return (ptr);
	}
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 3)
			return (1);
	int size = atoi(argv[2]) - atoi(argv[1]);
	int	*arr;
	
	arr = ft_range(atoi(argv[1]), atoi(argv[2]));

	int i = 0;
	while (i < size)
	{
			printf("INT ARRAY --> %d\n", arr[i]);
			i++;
	}
	free(arr);
}
*/
