/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_ultimate_ft.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:08:17 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/02/24 11:07:27 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include "ft_ultimate_ft.c"
int	main(void)
{
	int x;			// Variable x, type int
	x = 42;			// Store value of 42 to x
	int *ptr = &x;		// Pointer to int
	int **ptr2 = &ptr;	// Ptr to ptr to int
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****


	//ft_ultimate_ft();
	printf("Address of x: %p\n", &x);
	printf("Address of p: %p\n", ptr);
	printf("Address of int *: %p\n", &ptr);
	printf("Address of int **: %p\n", &ptr2);
	printf("Address of int ***: %p\n", &ptr3);
	printf("Address of int ****: %p\n", &ptr4);
}
