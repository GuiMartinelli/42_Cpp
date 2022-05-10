# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 14:19:03 by guferrei          #+#    #+#              #
#    Updated: 2022/05/09 14:22:57 by guferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=violence

CC=c++

CCFLAGS=-Wall -Wextra -Werror -std=c++98

FILES=Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CCFLAGS) $(FILES) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: clean all
