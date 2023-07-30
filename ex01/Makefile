# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/25 16:35:46 by ichouare          #+#    #+#              #
#    Updated: 2023/07/30 14:49:51 by ichouare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook


HEADERS=  Contact.hpp PhoneBook.hpp


FLAG =  c++

FLAGS =  -Wall -Wextra -Werror -std=c++98


SRC = ./Contact.cpp ./PhoneBook.cpp ./main.cpp


OBJ = $(SRC:.cpp=.o)

all : $(NAME) 


$(NAME): $(OBJ) $(HEADERS)
	$(FLAG) $(FLAGS) $(OBJ) -o $(NAME)
	
%.o : %.cpp $(HEADERS)
	$(FLAG) $(FLAGS)   -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) 

re: fclean all 