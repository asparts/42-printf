
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int	ft_printf(const char *format, ...);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_print_args(char *traverse, va_list args);
char *convert(unsigned int num, int base);

int	ft_prinft(const char *format, ...)
{

	char *traverse;
	unsigned int i;
	char *s;
	va_list args;
	va_start(args, format);

	while(*traverse != '\0')
	{
		while(*traverse != '%')
		{
			ft_putchar(*traverse);
			traverse++;
		}
		traverse++;
		if(traverse - 1 == '%')
			ft_print_args(traverse, args);
	}
	va_end(args;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	
}
void	ft_print_args(char *traverse, va_list args)
{
	char *s;

	switch(*traverse)
	{
		case 'c' : i = va_arg(args, int);
				putchar(i);
				break;
		case 'd' : i = va_arg(args, int)
				if(i < 0)
				{
					i = -i;
					ft_putchar(i);
				}
				ft_putstr(convert(i, 10));
				break;
		case 'o' : i = va_arg(args, unsigned int);
				ft_putstr(convert(i, 8));
				break;
		case 's' : s = va_arg(args, char*);
				ft_putstr(s);
				break;
		case 'x' : i = va_arg(args, unsigned int);
				ft_putstr(convert(i, 16));
				break;
		case '%' : ft_putchar('%');
				break;
	}
}
char *convert(unsigned int num, int base)
{
	static char representation[16];
	static char buffer[50];
	char *ptr;

	representation = "0123456789ABCDEF";
	prt = &buffer[49];
	*ptr = '\0';

	while(num != 0)
	{
		*--ptr = representation[num%base];
		num /= base;
	}
	return(ptr);
}
