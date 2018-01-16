NAME 		= 	phonebook
CC			=	clang++
FLAG		=	-Wall -Wextra -Werror

SRC			= 	Main.cpp\
				Phonebook.class.cpp\
				Contact.class.cpp
				
OBJ			= 	$(SRC:.cpp=.o)

all: $(NAME)

/%.o: src/%.cpp
	$(CC) $(FLAG) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
