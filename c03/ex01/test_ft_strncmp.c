/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 20:19:24 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/02/28 11:45:27 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_strncmp.c"
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		return(0);
	}
	
	printf("%d", ft_strncmp(argv[1], argv[2], (unsigned int) atoi(argv[3])));
	return (0);
}
