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

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	args; //holds the information needed by va_start, va_arg, va_end, and va_copy, not sure if I can use it though

	va_start(args, format);
	i = 0;
	len = 0;

	while (format[i])
	{
		if (format[i] == '%') //When you encounter a %, there is a variable to print.
		{
			len += ft_print_args(format[i + 1], args); 
			i++;
		}
		else
		{
			len += ft_putchar(format[i]); //Loop through a string. As long as the string is not a %, keep printing what you read.
		}
		i++;
	}
	va_end(args); //va_end macro performs cleanup for an ap object initialized by a call to va_start or va_copy.
	return (len);
}
