/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rafael.yanase@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 21:16:45 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/15 21:45:44 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN
#define FT_BOOLEAN

#include <unistd.h>
typedef int t_bool;
#define EVEN(nbr) (nbr % 2 == 0)
#define TRUE 1
#define FALSE 0
#define SUCCESS 0
#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."

#endif
