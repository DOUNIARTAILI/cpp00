# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 18:17:44 by drtaili           #+#    #+#              #
#    Updated: 2023/08/30 15:57:22 by drtaili          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp

OBJS = $(SRC:.c=.o)

NAME = megaphone

CC = g++

RM = rm -rf

FLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

fclean:
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY = all fclean re