
NAME			= intern

SRCS			= ./src/Bureaucrat.cpp				\
				  ./src/Form.cpp					\
				  ./src/ShrubberyCreationForm.cpp	\
				  ./src/RobotomyRequestForm.cpp		\
				  ./src/PresidentialPardonForm.cpp	\
				  ./src/Intern.cpp					\
				  ./src/main.cpp					\

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