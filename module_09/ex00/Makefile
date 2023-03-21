
NAME			= btc

SRCS			= ./src/main.cpp				\
				  ./src/BitcoinExchange.cpp

OBJS		    = $(SRCS:.cpp=.o)

CXX				= c++
CXXFLAGS		= -Wshadow -Wall -Wextra -Werror -std=c++98
RM				= rm -f


%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re