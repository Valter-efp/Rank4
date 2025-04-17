# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/02 17:12:27 by vafernan          #+#    #+#              #
#    Updated: 2025/04/17 17:58:08 by vafernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

NAME = ex04

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJ)
        
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re