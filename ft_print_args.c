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

void	ft_print_args(char *traverse, va_list args)
{
	char		*s;
	unsigned int	i;

    i = 1;
	switch (*traverse)
	{
		case 'c' :
			ft_putchar(va_arg(args, int));
			break;
		case 's' :
			ft_putstr(va_arg(args, char*));
			break ;
         case 'p' :
            ft_print_ptr();
			break ;
        case 'd' :
            ft_print_decimal();
			break ;
        case 'i' :
            ft_print_int();
			break ;
        case 'u' :
            ft_print_unsigned();
			break ;
		case 'x' : 
			ft_print_hex();
			break ;
        case 'X' : 
			ft_print_hex();
			break ;
		case '%' : ft_putchar('%');
			break ;
	}
}
