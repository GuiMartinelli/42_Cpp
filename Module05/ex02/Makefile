# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 19:53:51 by guferrei          #+#    #+#              #
#    Updated: 2022/05/26 21:01:28 by guferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=forms

CC=c++

CCFLAGS=-Wall -Wextra -Werror -std=c++98

FILES=Bureaucrat.cpp AForm.cpp RobotomyRequestForm.cpp \
ShrubberyCreationForm.cpp PresidentialPardonForm.cpp main.cpp

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CCFLAGS) $(FILES) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean
	rm *_shrubbery.txt

re: clean all
