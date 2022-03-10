SRCS = 	src/ft_printf.c src/ft_prints.c src/ft_printdi.c src/ft_printu.c \
		src/ft_printc.c src/ft_printp.c src/ft_printp.c src/ft_printx.c \
		src/ft_print_upper_x.c \
		src/ft_putchar_fd.c src/ft_putnbr_fd.c src/ft_putstr_fd.c \
		src/ft_strlen.c src/ft_len_nbr.c src/ft_len_nbr_u.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra
INCLUDE = -Iinclude
NAME = libftprintf.a
HEADER = include/ft_printf.h

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	$(OBJS)
		ar rc $(NAME) $(OBJS) 

all:		$(NAME)

clean:
		rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(NAME)

re: fclean all


