/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caller_point.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rafael.yanase@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 22:12:46 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/15 22:16:17 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point	point;

	set_point(&point);
	printf("Point x : %d\n", point.x);
	printf("Point y : %d\n", point.y);
	return (0);
}
