/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 01:52:52 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/18 01:27:35 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *p)
{
	unsigned long	ptr_address;
	int				len;

	len = 0;
	if (p == NULL)
	{
		ft_putstr("(nil)");
		return ;
	}
	ptr_address = (unsigned long)p;
	len += ft_putstr("0x");
	len += ft_print_hex(ptr_address, 1);
	return (len);
}
