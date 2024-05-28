CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES =ft_printf.c\
		ft_putchar.c\
		ft_putnbr.c\
		ft_putstring.c\
		ft_putunsignedint.c\
		ft_puthexalower.c\
		ft_puthexaupper.c\
		ft_putpointer.c
OFILES = $(CFILES:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME) : $(OFILES)
	ar -rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean:clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
