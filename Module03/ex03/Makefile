# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/19 19:04:57 by guferrei          #+#    #+#              #
#    Updated: 2022/05/20 20:51:06 by guferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=DiamondTrap

CC=c++

CCFLAGS=-Wall -Wextra -Werror -std=c++98

FILES=ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp main.cpp

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CCFLAGS) $(FILES) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: clean all
