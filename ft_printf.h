/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 00:39:04 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/12 02:00:03 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int     ft_printf(char *format, ...);
void	ft_putchar(char c); // %c and %%
void	ft_putstr(char *str); // %s
void	ft_print_args(char *traverse, va_list args);
char*	ft_convert(unsigned int num, int base);
char*	ft_strcpy(char* dest, char* src);
void	ft_print_int(); // %i
void	ft_print_ptr(); // %p
void	ft_print_unsigned(); // %u
void	ft_print_hex(); // %x and %X
void	ft_print_decimal(); // %d
#endif