/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 08:14:10 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/01 16:04:23 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	cnt;

	cnt = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (*(str + cnt) != '\0')
	{
		if (!((*(str + cnt) >= 65 && *(str + cnt) < 91)))
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
