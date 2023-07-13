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

int     ft_printf(const char *format, ...);
void	ft_putchar(char c); // %c and %%
void	ft_putstr(char *str); // %s
void	ft_print_args(char *traverse, va_list args);
char*	ft_convert(unsigned int num, int base, int lowercase);
char*	ft_strcpy(char* dest, char* src);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_print_int(int n); // %i & %d
void	ft_print_ptr(void *p); // %p
void	ft_print_unsigned(unsigned u); // %u
void	ft_print_hex(int num, int lowercase); // %x and %X
#endif
