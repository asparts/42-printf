/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:44:46 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/12 01:42:00 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char *format, ...)
{

	char	*traverse;
	va_list	args;

	va_start(args, format);
	traverse = format;
	while (*traverse != '\0')
	{
		while (*traverse != '%')
		{
			ft_putchar(*traverse);
			traverse++;
		}
		traverse++;
		ft_print_args(traverse, args);
	}
	va_end(args);
	return (0);
}
