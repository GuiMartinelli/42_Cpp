# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 18:55:09 by guferrei          #+#    #+#              #
#    Updated: 2022/06/02 19:57:37 by guferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=template

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
