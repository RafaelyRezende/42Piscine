/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 14:52:58 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/21 15:28:52 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

/*
int	main()
{
	int	x = 4;
	int	y = 2;

	printf("OLD VAL X --> %d\n", x);
	printf("OLD VAL y --> %d\n\n", y);
	ft_swap(&x, &y);
	printf("NEW VAL X --> %d\n", x);
	printf("NEW VAL y --> %d\n", y);
}
*/
