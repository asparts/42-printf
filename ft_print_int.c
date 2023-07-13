/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 01:48:13 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/12 01:48:24 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// to print %i & %d
void    ft_print_int(int n)
{
    int nbr;
    
    nbr = 0;
    nbr = n;
    if (n < 0)
    {
        ft_putchar('-');
    }
    if (n < 10)
        ft_putchar(n + '0');
    else
    {
        ft_print_int(n / 10);
        ft_putchar(n % 10 + '0');
    }
}