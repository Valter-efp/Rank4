# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/01 17:43:58 by vafernan          #+#    #+#              #
#    Updated: 2025/04/17 16:17:02 by vafernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ./Includes

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

NAME = ex00

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJS)
		
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re