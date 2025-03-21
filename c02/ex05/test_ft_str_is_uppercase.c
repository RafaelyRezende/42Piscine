/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_str_is_alpha.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 08:14:15 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/02/26 08:59:41 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_is_alpha.c"
#include <stdio.h>

int	main()
{
	char str1[] = "ThisHasOnlyAlphabetChars\0";
	char str2[] = "ThisHasA Space\0";
	char str3[] = "This/Also*Has\0";
	char str4[] = "No\0";
	char str5[] = "\0Terminator\0";

	printf("%d\n", ft_str_is_alpha(&str1[0])); // Expected 1
	printf("%d\n", ft_str_is_alpha(&str2[0])); // Expected 0
	printf("%d\n", ft_str_is_alpha(&str3[0])); // Expected 0
	//printf("%d\n", ft_str_is_alpha(&str4[0])); // Expected 1
	printf("%d\n", ft_str_is_alpha(&str4[0])); // Expected 1
	printf("%d\n", ft_str_is_alpha(&str5[0])); // Expected 1
}
