# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 19:53:51 by guferrei          #+#    #+#              #
#    Updated: 2022/05/24 21:00:12 by guferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=maggots

CC=c++

CCFLAGS=-Wall -Wextra -Werror -std=c++98

FILES=Bureaucrat.cpp Form.cpp main.cpp

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CCFLAGS) $(FILES) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: clean all
