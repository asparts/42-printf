/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 00:43:01 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/12 01:43:56 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_args(char c, va_list args)
{
	unsigned int	i;
	char			*str;

    i = 1;
	switch (c)
	{
		case 'c' :
			return(ft_putchar(va_arg(args, int)));
			break;
		case 's' :
			return(ft_putstr(va_arg(args, char*)));
			break ;
         case 'p' :
            ft_print_ptr(va_arg(args, void*));
			break ;
        case 'd' :
            return (ft_print_int(va_arg(args, int)));
			break ;
        case 'i' :
            return (ft_print_int(va_arg(args, int)));
			break ;
        case 'u' :
            return (ft_print_unsigned(va_arg(args, unsigned int)));
			break ;
		case 'x' : 
			return(ft_print_hex(va_arg(args, unsigned int), 1));
			break ;
        case 'X' : 
			return(ft_print_hex(va_arg(args, unsigned int), 0));
			break ;
		case '%' : 
			return (ft_putchar('%'));
			break ;
		default:
			return (-1);
	}
}
