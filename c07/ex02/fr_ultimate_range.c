/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 09:00:13 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/11 18:17:59 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	len;
	int	i;

	if (min >= max)
		*range = NULL;
		return (0);
	len = max - min;
	i = 0;
	ptr = malloc(sizeof(min) * len);
	if (ptr == NULL)
		return (-1);
	while(i < len)
	{
		ptr[i] = min + i;
		i++;
	}
	*range = ptr;
	return (len);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	int	*x[10] = {0};
	printf("%d", ft_ultimate_range(&x[0], atoi(argv[1]), atoi(argv[2])));
	printf("%d", ft_ultimate_range(&x[0], atoi(argv[1]), atoi(argv[2])));
	printf("%d", ft_ultimate_range(&x[0], atoi(argv[1]), atoi(argv[2])));
	printf("%d", ft_ultimate_range(&x[0], atoi(argv[1]), atoi(argv[2])));
	printf("%d", ft_ultimate_range(&x[0], atoi(argv[1]), atoi(argv[2])));
	printf("%d", ft_ultimate_range(&x[0], atoi(argv[1]), atoi(argv[2])));
	printf("%d", ft_ultimate_range(&x[0], atoi(argv[1]), atoi(argv[2])));
}
*/
