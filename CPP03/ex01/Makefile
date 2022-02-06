NAME		=	ScavTrap
HEAD		=	ClapTrap.hpp ScavTrap.hpp
OBJS_PATH	=	objects/
SRCS_PATH	=	./
SRCS_LIST	=	main.cpp ClapTrap.cpp ScavTrap.cpp
SRCS		=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))
OBJS_LIST	=	$(patsubst %.cpp, %.o, $(SRCS_LIST))
OBJS		=	$(addprefix $(OBJS_PATH),$(OBJS_LIST))
RM			= 	rm -rf
CXX			=	clang++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS_PATH) $(OBJS)
	$(CXX) $(CXXFLAGS) -I ClapTrap.hpp -I ScavTrap.hpp $(OBJS) -o $(NAME)

$(OBJS_PATH):
	mkdir -p $(OBJS_PATH)

$(OBJS_PATH)%.o : $(SRCS_PATH)%.cpp $(HEAD)
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: all
	./$(NAME)

clean:
	$(RM) $(OBJS_PATH)

fclean: clean
	$(RM) $(NAME)

re: fclean all
