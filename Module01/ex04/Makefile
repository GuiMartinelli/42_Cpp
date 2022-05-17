# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 16:24:44 by guferrei          #+#    #+#              #
#    Updated: 2022/05/16 19:01:07 by guferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=replace

CC=c++

CCFLAGS=-Wall -Wextra -Werror -std=c++98

FILE=main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CCFLAGS) $(FILE) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean
	rm *.replace

re: clean all
