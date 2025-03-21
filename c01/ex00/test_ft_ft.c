/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 08:44:30 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/02/24 10:14:08 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_ft.c"
int	main(void)
{
	int this;
	this = 0;

	printf("Before change: %d\n", this);
	ft_ft(&this);
	printf("After: %d\n", this);
	return (0);
}
