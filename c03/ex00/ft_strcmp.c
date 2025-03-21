/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 08:31:02 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/02/27 10:27:50 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	size_s1;
	unsigned char	size_s2;

	size_s1 = '\0';
	size_s2 = '\0';
	while (*s1)
	{
		size_s1 += *s1;
		s1++;
	}
	while (*s2)
	{
		size_s2 += *s2;
		s2++;
	}
	if (size_s1 < size_s2)
	{
		return (-1);
	}
	else if (size_s1 > size_s2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
