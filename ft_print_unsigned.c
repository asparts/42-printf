/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 01:53:25 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/12 01:53:31 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// %u

void	ft_print_unsigned(unsigned u)
{
    char    *str;
    int     integers;
    int     precision;
    int     i;
    int     j;

    str = u;
    integers = 0;
    precision = 0;
    i = 0;
    j = 0;
    while (str[i] != '.')
    {
        integers++;
        i++;
    }
    while (str[i])
    {
        precision++;
        i++;
    }
    i = 0;
    while (i < integers)
    {
        ft_putchar(str[i]);
        i++;
    }
    ft_putchar('.');
    while (j < precision)
    {
        ft_putchar(str[i]);
        i++;
        j++;
    }
}