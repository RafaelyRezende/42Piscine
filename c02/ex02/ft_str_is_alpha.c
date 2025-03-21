/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 08:14:10 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/01 13:26:14 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_alpha_upper(char *c)
{
	if (*c >= 65 && *c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	is_alpha_lower(char *c)
{
	if (*c >= 97 && *c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_alpha(char *str)
{
	int	cnt;

	cnt = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (*(str + cnt))
	{
		if (!(is_alpha_upper(str[cnt]) || is_alpha_lower(str[cnt])))
		{
			return (0);
		}
		else
		{
			cnt++;
		}
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	char	str1[] = "thisIsABanana";
	char	str2[] = "thisIs-WRONG";
	char	str3[] = "th1sAlsoW0rong";

	printf("%s\n", str1);
	printf("%d", ft_str_is_alpha(str1));
	printf("\n----------------------------");
	printf("%s\n", str2);
	printf("%d", ft_str_is_alpha(str2));
	printf("\n----------------------------");
	printf("%s\n", str3);
	printf("%d", ft_str_is_alpha(str3));
}
*/
