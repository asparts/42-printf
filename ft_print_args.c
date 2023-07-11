/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 00:43:01 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/12 01:07:40 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_args(char *traverse, va_list args)
{
	char		*s;
	unsigned int	i;

	switch (*traverse)
	{
		case 'c' : i = va_arg(args, int);
			ft_putchar(i);
			break;
		case 'd' : i = va_arg(args, int);
			if (i < 0)
			{
				i = -i;
				ft_putchar(i);
			}
			ft_putstr(ft_convert(i, 10));
			break ;
		case 'o' : i = va_arg(args, unsigned int);
			ft_putstr(ft_convert(i, 8));
			break ;
		case 's' : s = va_arg(args, char*);
			ft_putstr(s);
			break ;
		case 'x' : i = va_arg(args, unsigned int);
			ft_putstr(ft_convert(i, 16));
			break ;
		case '%' : ft_putchar('%');
			break ;
	}
}
