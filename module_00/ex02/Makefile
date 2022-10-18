
NAME			= account

SRCS			= ./src/Account.cpp	\
				  ./src/tests.cpp	\

SRCS_OBJS		= $(SRCS:.cpp=.o)

CPP				= g++
CPPFLAGS		= -Wall -Wextra -Werror -std=c++98
RM				= rm -f


%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(SRCS_OBJS)
	$(CPP) $(CPPFLAGS) $(SRCS_OBJS) -o $(NAME)

clean:
	$(RM) $(SRCS_OBJS)
	
fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re