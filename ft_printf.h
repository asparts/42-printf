/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <mnummi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 00:39:04 by mnummi            #+#    #+#             */
/*   Updated: 2023/07/12 01:02:03 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int     ft_printf(char *format, ...);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_print_args(char *traverse, va_list args);
char*	ft_convert(unsigned int num, int base);
char*	ft_strcpy(char* dest, char* src);
