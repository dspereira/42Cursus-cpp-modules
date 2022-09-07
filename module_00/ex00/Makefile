
NAME			= megaphone

SRCS			= ./megaphone.cpp

SRCS_OBJS		= $(SRCS:.cpp=.o)

CC				= g++
CFLAGS			= -Wall -Wextra -Werror -std=c++98
RM				= rm -f


%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

all: $(NAME)

$(NAME): $(SRCS_OBJS)
	$(CC) $(CFLAGS) $(SRCS_OBJS) -o $(NAME)

clean:
	$(RM) $(SRCS_OBJS)
	
fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re