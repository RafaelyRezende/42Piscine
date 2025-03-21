/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_div_mod.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:31:30 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/02/24 11:57:06 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "test_ft_div_mod"

int	main(void)
{
	int num1, num2;
	num1 = 15; num2 =5;

	int div, mod;
	div = 0; mod = 0;	
	printf("Division: %d\nModulus: %d\n");
	ft_div_mod(&num1, &num2);
	printf("Division: %d\nModulus: %d\n");

	return (0);
}
