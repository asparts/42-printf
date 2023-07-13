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
//converting to hex
char *ft_convert(unsigned int num, int base, int lowercase)
{
	char	representation[16];
	char	buffer[50];
	char	*ptr;

	if (lowercase == 1)
		ft_strcpy(representation, "0123456789abcdef");
	else
		ft_strcpy(representation, "0123456789ABCDEF");
	ptr = &buffer[49]; // assigning ptr to end of buffer
	*ptr = '\0'; //setting null terminating char to end 
	while (num != 0)
	{
		*--ptr = representation[num%base]; //starting from end of ptr, using representation to turn num with modulo to hex
		num /= base; // to next num
	}
	return (ptr);
}