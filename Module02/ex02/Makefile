# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/17 19:24:18 by guferrei          #+#    #+#              #
#    Updated: 2022/05/17 19:26:42 by guferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Fixed

CC=c++

CCFLAGS=-Wall -Wextra -Werror -std=c++98

FILES=Fixed.cpp main.cpp

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CCFLAGS) $(FILES) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: clean $(NAME)