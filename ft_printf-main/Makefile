# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ualkan <ualkan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/30 00:53:32 by ualkan            #+#    #+#              #
#    Updated: 2024/11/30 00:53:51 by ualkan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC = print_c.c print_d.c print_p.c print_s.c print_u.c print_x.c print_utils.c printf.c
OBJ = $(SRC:.c=.o)

NAME = libftprintf.a
LIBFT = ./libft/libft.a

all: $(LIBFT) $(NAME)


$(OBJ): %.o: %.c
	$(CC) -c $(CFLAGS)  $< -o $@

$(NAME): $(OBJ)
	cp  libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJ)

$(LIBFT):
	make -C ./libft all


clean:
	make -C ./libft clean
	rm -f $(OBJ)

fclean: clean
	make -C ./libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
