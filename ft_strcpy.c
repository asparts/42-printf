/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 00:41:57 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/12 01:08:32 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char*	ft_strcpy(char *dest, char *src)
{
	char *ptr;

	if (!dest)
		return (NULL);
	ptr = dest;
	while (*src = '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = '\0';
	return (ptr);
}
