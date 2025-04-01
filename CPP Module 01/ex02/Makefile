# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vafernan <vafernan@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/01 19:27:05 by vafernan          #+#    #+#              #
#    Updated: 2025/04/01 19:30:12 by vafernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

NAME = HiThisIsBrain

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean: 
	rm -rf $(OBJ)
        
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re