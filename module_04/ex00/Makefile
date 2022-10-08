
NAME			= polymorp

SRCS			= ./src/Animal.cpp		\
				  ./src/Dog.cpp			\
				  ./src/Cat.cpp			\
				  ./src/WrongAnimal.cpp	\
				  ./src/WrongCat.cpp	\
				  ./src/main.cpp		\

OBJS		    = $(SRCS:.cpp=.o)

CPP				= g++
CPPFLAGS		= -Wshadow -Wall -Wextra -Werror -std=c++98
RM				= rm -f


%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re