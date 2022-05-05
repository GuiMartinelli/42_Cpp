# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/27 13:19:03 by guferrei          #+#    #+#              #
#    Updated: 2022/04/27 14:04:19 by guferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=megaphone

CC=g++

CCFLAGS= -Wall -Wextra -Werror -std=c++98

FILE=megaphone.cpp

all: $(NAME)

$(NAME): $(FILE)
	$(CC) $(CCFLAGS) $(FILE) -o $(NAME)

fclean: clean

clean:
	rm $(NAME)

re: clean $(NAME)
