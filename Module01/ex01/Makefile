# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/06 14:30:15 by guferrei          #+#    #+#              #
#    Updated: 2022/05/06 15:08:25 by guferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Horde

CC=c++

CCFLAGS=-Wall -Wextra -Werror -std=c++98

FILES=Zombie.cpp zombieHorde.cpp main.cpp

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CCFLAGS) $(FILES) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: clean $(NAME)
