# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/10 15:15:09 by guferrei          #+#    #+#              #
#    Updated: 2022/05/10 15:19:31 by guferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=harlFilter

CC=c++

CCFLAGS=-Wall -Wextra -Werror -std=c++98

FILES=Harl.cpp main.cpp

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CCFLAGS) $(FILES) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: clean all
