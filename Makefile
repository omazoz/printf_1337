# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omazoz <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/24 10:29:41 by omazoz            #+#    #+#              #
#    Updated: 2021/12/25 02:27:08 by omazoz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC_FILE = ft_check_flags.c\
		   ft_printf.c\
		   ft_put_adress.c\
		   ft_putchar.c\
		   ft_putnbr.c\
		   ft_putnbr_base.c\
		   ft_putnbr_unsigned.c\
		   ft_putstr.c
OBJ_FILE = $(SRC_FILE:.c=.o)

all: $(NAME)

bonus: $(NAME)
	
$(NAME):	$(OBJ_FILE)
	ar rc $(NAME) $(OBJ_FILE)

$(OBJ_FILE):	$(SRC_FILE)
	gcc -Wall -Werror -Wextra -c $(SRC_FILE)

clean :
	rm -rf $(OBJ_FILE)
fclean : clean
	rm -rf $(NAME)
re : fclean $(NAME)

.PHONY: all clean fclean re bonus
