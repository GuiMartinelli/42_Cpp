# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 19:32:21 by guferrei          #+#    #+#              #
#    Updated: 2022/06/01 19:25:25 by guferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=type

CC=c++

CCFLAGS=-Wall -Wextra -Werror -std=c++98

FILES=Base.cpp main.cpp

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CCFLAGS) $(FILES) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: clean all
