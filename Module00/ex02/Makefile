# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/05 14:26:35 by guferrei          #+#    #+#              #
#    Updated: 2022/05/05 14:29:04 by guferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=account

CC=g++

CCFLAGS= -Wall -Wextra -Werror -std=c++98

FILES=Account.cpp test.cpp

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CCFLAGS) $(FILES) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean
	rm $(NAME)

re: clean all
