/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluis-ya <rluis-ya@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 22:23:49 by rluis-ya          #+#    #+#             */
/*   Updated: 2025/03/21 10:37:40 by rluis-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
/*
typedef struct s_stock_str
{
    int size;
    char *str;
    char *copy;
}   t_stock_str;
*/
int ft_strlen(char *str);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
char    *ft_strdup(char *str1, int len);
/*
int main(void)
{
    char *this[] = {"this", "cat", "in", "boxes"};
    int len = 4;
    struct  s_stock_str *test_ptr;
    int     i;

    i = 0;
    test_ptr = ft_strs_to_tab(len, this);
    while (i < len)
    {
        printf("%d\n", test_ptr[i].size);
        printf("%s\n", test_ptr[i].str);
        printf("%s\n", test_ptr[i].copy);
        i++;
    }
    free(test_ptr);
}
*/
struct s_stock_str  *ft_strs_to_tab(int ac, char **av)
{
    int i;
    t_stock_str *ptr;
    
    ptr = malloc(sizeof(t_stock_str) * (ac + 1));
    if (!ptr)
    {
        ptr = NULL;
        return (ptr);
    }
    i = 0;
    while (i < ac)
    {
        ptr[i].size = ft_strlen(av[i]);
        ptr[i].str = av[i];
        ptr[i].copy = ft_strdup(av[i]);
        i++;
    }
    ptr[i].str = 0;
    return (ptr);
}

char    *ft_strdup(char *str1)
{
    char    *sptr;
    int     i;
    int     size;

    i = 0;
    size = ft_strlen(str1);
    sptr = malloc(sizeof(char) * (size + 1));
    if (!sptr)
    {
        sptr = NULL;
        return (sptr);
    }
    while (str1[i])
    {
        sptr[i] = str1[i];
        i++;
    }
    sptr[i] = '\0';
    return (sptr);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*str)
    {
        i++;
        str++;
    }
    return (i);
}
