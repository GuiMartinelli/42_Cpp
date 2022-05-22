# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/21 13:32:23 by guferrei          #+#    #+#              #
#    Updated: 2022/05/21 13:55:10 by guferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Polymorphism

CC=c++

CCFLAGS=-Wall -Wextra -Werror -std=c++98

FILES=Animal.cpp WrongAnimal.cpp Dog.cpp Cat.cpp WrongCat.cpp main.cpp

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CCFLAGS) $(FILES) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: clean all
