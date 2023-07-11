CC	=	gcc
FLAGS	=	-Wall -Wextra -Werror
NAME	=	libftprintf.a
SRCS	=	ft_printf.c ft_putchr.c ft_putstr.c ft_print_args.c ft_convert.c ft_strcpy.c ft_print_int.c ft_print_decimal.c

OBJS	=	${SRCS:.c=.o}

RM	=	rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
		ar rcs $(NAME) $(OBJS)
clean:
		$(RM) $(OBJS)
fclean:		clean
		$(RM) $(NAME)
re:		fclean $(NAME)

.PHONY:		all clean fclean re