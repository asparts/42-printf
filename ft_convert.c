/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 00:45:19 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/12 00:45:24 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *convert(unsigned int num, int base)
{
	char	representation[16];
	char	buffer[50];
	char	*ptr;

	ft_strcpy(representation, "0123456789ABCDEF");
	ptr = &buffer[49];
	*ptr = '\0';
	while (num != 0)
	{
		*--ptr = representation[num%base];
		num /= base;
	}
	return (ptr);
}