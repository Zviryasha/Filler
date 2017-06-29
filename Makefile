# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: opanchen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/06 12:39:22 by opanchen          #+#    #+#              #
#    Updated: 2017/06/22 14:36:17 by opanchen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = filler

CC = gcc

HEAD = filler.h get_next_line.h 

HEAD_GCH = $(HEAD:.h=.h.gch)

FLAGS = -Wall -Wextra -Werror

SRC = filler.c \
	  get_next_line.c \
	  output.c \
	  pars.c \
	  obrabotka.c \
	  solv.c \
  	  algo.c \
	  lol.c 

SRO = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRO)
			make -C libft
			$(CC) $(FLAGS) -c $(SRC) $(HEAD)
			$(CC) $(FLAGS) -o $(NAME) $(SRO) libft/libft.a


clean:
			make clean -C ./libft
			@rm -f $(SRO) $(HEAD_GCH)

fclean:
			make fclean -C ./libft
			@make clean
			@rm -f $(NAME)

re:
	make fclean
	make all -C ./libft
	make all
