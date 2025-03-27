/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 12:06:55 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/27 12:52:46 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE
#define FT_DISPLAY_FILE

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str);
void	err_msg_narg(void);
void	err_msg_oarg(void);
void	err_msg_nread(void);
void	ft_display_file(char *fname);

#endif
