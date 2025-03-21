/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strupcase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:05:43 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/06 10:33:08 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_strupcase.c"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%s", ft_strupcase(argv[1]));
}
