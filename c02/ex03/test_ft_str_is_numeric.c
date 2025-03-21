/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_str_is_numeric.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 08:14:15 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/01 14:41:26 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_numeric.c"
#include <stdio.h>

int	main()
{
	char str1[] = "ThisHasOnlyAlphabetChars\0";
	char str2[] = "ThisHasA Space\0";
	char str3[] = "This/Also*Has\0";
	char str4[] = "No\0";
	char str5[] = "\0Terminator\0";

	printf("%d\n", ft_str_is_numeric(&str1[0])); // Expected 1
	printf("%d\n", ft_str_is_numeric(&str2[0])); // Expected 0
	printf("%d\n", ft_str_is_numeric(&str3[0])); // Expected 0
	//printf("%d\n", ft_str_is_alpha(&str4[0])); // Expected 1
	printf("%d\n", ft_str_is_numeric(&str4[0])); // Expected 1
	printf("%d\n", ft_str_is_numeric(&str5[0])); // Expected 1
}
