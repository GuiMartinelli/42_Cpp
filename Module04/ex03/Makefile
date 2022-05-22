# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/22 11:02:11 by guferrei          #+#    #+#              #
#    Updated: 2022/05/22 15:42:02 by guferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Interface

CC=c++

CCFLAGS=-Wall -Wextra -Werror -std=c++98

FILES=AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp main.cpp

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CCFLAGS) $(FILES) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: clean all