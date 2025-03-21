/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:58:54 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/02/26 14:59:50 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	num;

	num = 0;
	while (*(str + num) != '\0')
	{
		num++;
	}
	return (num);
}
