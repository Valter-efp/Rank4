# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/31 17:33:12 by vafernan          #+#    #+#              #
#    Updated: 2025/04/17 16:16:56 by vafernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ./Includes

SRC = Contact.cpp main.cpp PhoneBook.cpp

NAME = ex01

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re