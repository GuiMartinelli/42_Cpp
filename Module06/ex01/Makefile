# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 18:46:15 by guferrei          #+#    #+#              #
#    Updated: 2022/06/01 18:47:46 by guferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=serialization

CC=c++

CCFLAGS=-Wall -Wextra -Werror -std=c++98

FILES=Data.cpp main.cpp

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CCFLAGS) $(FILES) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: clean all
