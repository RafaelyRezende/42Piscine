/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 12:04:35 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/27 14:24:21 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	err_msg_narg(void)
{
	char *err_msg;

	err_msg = "File name missing.";
	write(STDERR_FILENO, err_msg, ft_strlen(err_msg));
	write(STDERR_FILENO, "\n", 1);
}

void	err_msg_oarg(void)
{
	char *err_msg;

	err_msg = "Too many arguments.";
	write(STDERR_FILENO, err_msg, ft_strlen(err_msg));
	write(STDERR_FILENO, "\n", 1);
}

void	err_msg_nread(void)
{
	char *err_msg;

	err_msg = "Cannot read file.";
	write(STDERR_FILENO, err_msg, ft_strlen(err_msg));
	write(STDERR_FILENO, "\n", 1);
}

void	ft_display_file(char *fname)
{
	int	fdescriptor;
	char	buffer[1024];
	int	read_status;
	int	i;

	i = 0;
	while (i < 1024)
	{
		buffer[i] = 0;
		i++;
	}
	fdescriptor = open(fname, O_RDONLY);
	if (fdescriptor == -1)
	{
		err_msg_nread();
		exit(EXIT_FAILURE);
	}
	
	read_status = read(fdescriptor, buffer, sizeof(buffer));
	if (read_status == -1)
	{
		err_msg_nread();
		exit(EXIT_FAILURE);
	}
	while (read_status > 0)
	{
		write(STDOUT_FILENO, buffer, sizeof(buffer));
		read_status = read(fdescriptor, buffer, sizeof(buffer));
	}
	close(fdescriptor);
}
