
NAME			= phonebook

SRCS			= ./src/Contact.cpp \
				  ./src/PhoneBook.cpp \
				  ./src/UserInterface.cpp \
				  ./src/utils.cpp \
				  ./src/main.cpp \

OBJS		    = $(SRCS:.cpp=.o)

CPP				= c++
CPPFLAGS		= -Wall -Wextra -Werror -std=c++98
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