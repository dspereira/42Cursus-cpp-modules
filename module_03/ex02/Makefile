
NAME			= FragTrap

SRCS			= ./src/ClapTrap.cpp	\
				  ./src/ScavTrap.cpp	\
				  ./src/FragTrap.cpp	\
				  ./src/utils.cpp		\
				  ./src/main.cpp

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