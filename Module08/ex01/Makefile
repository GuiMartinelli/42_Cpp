# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 21:33:53 by guferrei          #+#    #+#              #
#    Updated: 2022/06/06 21:34:33 by guferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=span

CC=c++

CCFLAGS=-Wall -Wextra -Werror -std=c++98

FILE=main.cpp Span.cpp

all: $(NAME)

$(NAME): $(FILE)
	$(CC) $(CCFLAGS) $(FILE) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: clean all
