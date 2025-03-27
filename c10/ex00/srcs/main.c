/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 12:17:50 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/27 12:23:33 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		err_msg_narg();
		exit(EXIT_FAILURE);
	}
	else if (argc > 2)
	{
		err_msg_oarg();
		exit(EXIT_FAILURE);
	}
	else
	{
		ft_display_file(argv[1]);
		return(0);
	}
}
