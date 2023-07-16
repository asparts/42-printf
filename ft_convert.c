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
/*
To convert int to hex:
Divide the integer by 16
Divide the result of the division by 16
Take the remainder of the division and convert it to a hexadecimal digit
Repeat steps one and two until the result of the division is 0
*/
	char	*ptr;
	char	buffer[50]; //assuming 50 chars is long enough
	char	representation[16];
	int	res;

	if (lowercase == 1)
		ft_strcpy(representation, "0123456789abcdef");
	else
		ft_strcpy(representation, "0123456789ABCDEF");
	ptr = &buffer[49]; // assigning ptr to end of buffer
	*ptr = '\0'; //setting null terminating char to end 
	if (num <= 0)
	{
		*--ptr = '0';
		return (ptr);
	}
	while (num > 0)
	{
		res = num % 16;
		*--ptr = representation[res];
		num = num / 16;
	}
	//printf("test w. printf:%s", ptr);
	return (ptr);
}