/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 08:14:10 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/01 16:03:31 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	cnt;

	cnt = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (*(str + cnt) != '\0')
	{
		if (!((*(str + cnt) >= 48 && *(str + cnt) < 58)))
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
