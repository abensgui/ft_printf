CC = cc -c

CFLAGS = -Wall -Werror -Wextra 

SRCS =  ft_printf.c\
		ft_putchar.c\
		ft_printhex.c\
		ft_printhexu.c\
		ft_printnbr.c\
		ft_printun.c\
		ft_printstr.c\
		ft_len.c\
		ft_strlen.c\
		ft_printad.c

OBJS = ${SRCS:.c=.o}

ARV = ar -rcs

NAME = libftprintf.a

REM = rm -f

.c.o :
	$(CC) $(CFLAGS) $< -o $@
	$(ARV) $(NAME) $@

all : $(NAME)
$(NAME) : $(OBJS)

clean :
	${REM} ${OBJS}

fclean : clean
	${REM} ${NAME}

re : fclean all

.PHONY : all clean fclean bonus re