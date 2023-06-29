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

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int	ft_printf(char *format, ...);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_print_args(char *traverse, va_list args);
char*	convert(unsigned int num, int base);
char*	ft_strcpy(char* dest, char* src);

int main(void)
{
	ft_printf("test %d", 1);
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
		//if(traverse - 1 == '%')
			ft_print_args(traverse, args);
	}
	va_end(args);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print_args(char *traverse, va_list args)
{
	char		*s;
	unsigned int	i;

	switch (*traverse)
	{
		case 'c' : i = va_arg(args, int);
			putchar(i);
			break;
		case 'd' : i = va_arg(args, int);
			if (i < 0)
			{
				i = -i;
				ft_putchar(i);
			}
			ft_putstr(convert(i, 10));
			break ;
		case 'o' : i = va_arg(args, unsigned int);
			ft_putstr(convert(i, 8));
			break ;
		case 's' : s = va_arg(args, char*);
			ft_putstr(s);
			break ;
		case 'x' : i = va_arg(args, unsigned int);
			ft_putstr(convert(i, 16));
			break ;
		case '%' : ft_putchar('%');
			break ;
	}
}

char *convert(unsigned int num, int base)
{
	char	representation[16];
	char	buffer[50];
	char	*ptr;

	printf("here");
	ft_strcpy(representation, "0123456789ABCDEF");
	//representation = "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	printf("here2");
	while (num != 0)
	{
		*--ptr = representation[num%base];
		num /= base;
	}
	return (ptr);
}
char*	ft_strcpy(char *dest, char *src)
{
	char *ptr;

	if (dest == NULL)
		return (NULL);
	*ptr = dest;
	while (*src = '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = '\0';
	return (ptr);
}
