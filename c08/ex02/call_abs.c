/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_abs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rafael.yanase@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 21:54:31 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/15 21:58:57 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	int	x;

	x = atoi(argv[1]);
	printf("INPUT -> %d\n", x);
	printf("ABS   -> %d", ABS(x));
	return (0);
}
