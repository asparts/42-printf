/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 01:53:39 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/12 01:53:43 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// for printing %x and %X
int	ft_print_hex(int num, int lowercase)
{
    char    *str;
    int     len;

    len = 0;
    if (lowercase == 1)
        str = ft_convert(num, 16, 1);
    else
        str = ft_convert(num, 16, 0);
    len += ft_putstr(str);
    return (len);
}