/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:57:15 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/06 10:30:39 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while(*str)
	{
		if (*(str + i) >= 97 && *(str + i) <= 122)
			*(str + i) -= 32;
		i++;
	}
	return (str);
}
