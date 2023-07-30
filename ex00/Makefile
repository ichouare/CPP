# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/25 16:35:46 by ichouare          #+#    #+#              #
#    Updated: 2023/07/29 11:59:27 by ichouare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FLAG =  c++

FLAGS =  -Wall -Wextra -Werror -std=c++98


SRC = ./megaphone.cpp


OBJ = $(SRC:.cpp=.o)

all : $(NAME)


$(NAME) : $(OBJ)
		$(FLAG) $(FLAGS)  $^ -o $@


%.o : %.cpp 
	$(FLAG) $(FLAGS)  $< -c -o $@ 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) 

re: fclean all 