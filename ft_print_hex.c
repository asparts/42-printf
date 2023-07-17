/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 01:53:39 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/17 23:03:17 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// for printing %x and %X
//doing this printing here, 
//since couldn't get ft_putstr to work.. Gotta investigate that more later..
int	ft_print_hex(long int num, int lowercase)
{
	char	*str;
	int		i;

	if (lowercase == 1)
		str = ft_convert(num, 16, 1);
	else
		str = ft_convert(num, 16, 0);
	i = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (str[i])
		i++;
	return (write(1, str, i));
}
