/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:22:26 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/02/24 11:32:36 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_swap.c"

int	main(void)
{
	int num1, num2;
	num1 = 54;
	num2 = 45;

	printf("Before swap: %d %d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("After swap: %d %d", num1, num2);
	
	return (0);
}
