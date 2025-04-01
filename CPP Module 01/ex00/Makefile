# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/01 17:43:58 by vafernan          #+#    #+#              #
#    Updated: 2025/04/01 18:30:46 by vafernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ./Includes

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

NAME = BraiiiiiiinnnzzzZ

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean: 
	rm -rf $(OBJS)
		
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re