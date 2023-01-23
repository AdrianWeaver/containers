NAME = stl_executable
NAME_FT = ft_executable

CXX = c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
CPPFLAGS	= -MMD

SRCS		=	main.cpp

INC			=	-I	vector

OBJS = $(SRCS:.cpp=.o)
DEPS = $(OBJS:.o=.d)


all: $(NAME) $(NAME_FT)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(@) -D CUSTOM_SCOPE=0

$(NAME_FT): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(@) $(INC)

clean:
	rm -f $(OBJS)
	rm -f $(DEPS)

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME_FT)

re: fclean
	make all

test:	$(NAME) $(NAME_FT)
		./$(NAME) 0
		./$(NAME_FT) 0

vtest:	$(NAME) $(NAME_FT)
		valgrind --leak-check=full ./$(NAME) 0
		valgrind --leak-check=full ./$(NAME_FT) 0

-include $(DEPS)

.PHONY: all clean fclean re test vtest