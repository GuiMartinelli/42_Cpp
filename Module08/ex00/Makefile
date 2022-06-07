# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 16:18:53 by guferrei          #+#    #+#              #
#    Updated: 2022/06/06 16:20:09 by guferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=easyfind

CC=c++

CCFLAGS=-Wall -Wextra -Werror -std=c++98

FILE=main.cpp

all: $(NAME)

$(NAME): $(FILE)
	$(CC) $(CCFLAGS) $(FILE) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: clean all
