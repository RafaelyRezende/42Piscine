/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:56:02 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/02/26 15:02:29 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.c"
#include <stdio.h>
int	main(void)
{
	int siz = 0;

	printf("Before fun: %d\n", siz);
	siz = ft_strlen("thisString");
	printf("Before fun: %d\n", siz);
	siz = ft_strlen("Another!Str!");
	printf("Before second fun: %d\n", siz);
	siz = ft_strlen("Ano!\tStr!");
	printf("Before third fun: %d", siz);
}
