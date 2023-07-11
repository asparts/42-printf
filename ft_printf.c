/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:44:46 by mnummi            #+#    #+#             */
/*   Updated: 2023/06/29 11:59:49 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	//ft_printf("test");
	return 0;
}

int	ft_printf(char *format, ...)
{

	char	*traverse;
	char	*s;
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
}