# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drtaili <drtaili@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 17:03:39 by drtaili           #+#    #+#              #
#    Updated: 2023/08/30 17:17:28 by drtaili          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp contact.cpp phonebook.cpp 

OBJS = $(SRC:.c=.o)

NAME = phonebook
HEADERS = contact.class.hpp phonebook.class.hpp

CC = g++ -fsanitize=address

RM = rm -rf

FLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME) : $(OBJS) 
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.c $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

fclean:
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY = all fclean re