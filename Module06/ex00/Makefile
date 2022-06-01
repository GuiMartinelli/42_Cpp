# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 19:32:21 by guferrei          #+#    #+#              #
#    Updated: 2022/06/01 16:54:45 by guferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=converter

CC=c++

CCFLAGS=-Wall -Wextra -Werror -std=c++98

FILES=conversions.cpp main.cpp

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CCFLAGS) $(FILES) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: clean all
