NAME = megaphone

FLAG =  c++;

FLAGS =  -Wall -Wextra -Werror -std=c++11


SRC = megaphone.cpp;


OBJ = $(SRCS:.cpp=.o)

all : $(NAME)


$(NAME) : $(OBJ)
		$(FLAG) $(FLAGS)  $^ -o $@


%.o : %.cpp 
	$(FLAG) $(FLAGS)   -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) 

re: fclean all 