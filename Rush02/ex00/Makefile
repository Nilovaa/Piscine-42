# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nyrakoto <nyrakoto@student.42antanana      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/24 12:29:30 by nyrakoto          #+#    #+#              #
#    Updated: 2024/11/24 12:29:31 by nyrakoto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EX = rush-02

COMPILE = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi_num.c ft_div.c ft_hundred.c ft_is_zero.c ft_strcat.c ft_strlen.c ft_strstr.c ft_ten_en.c ft_ten_power.c ft_ten_sup_ones.c ft_unity.c ft_write.c ft_write_loop.c main.c

OBJ = ${SRCS:.c=.o}

H = all_lib.h

$(EX): $(OBJ)
	$(COMPILE) $(CFLAGS) $(OBJ) -o $(EX)

%.o: %.c $(H)
	$(COMPILE) $(CFLAGS) -c $< -o $@ -I.

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(EX)

re: fclean $(EX)
