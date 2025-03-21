/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_ultimate_div_mod.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:17:29 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/02/24 13:26:31 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimate_div_mod.c"
#include <stdio.h>
int	main()
{
	int foo, bar;

	foo = 35; bar = 3;
	
	printf("Before func: %d %d\n", foo, bar);
	ft_ultimate_div_mod(&foo, &bar);
	printf("After func: %d %d\n", foo, bar);

}
