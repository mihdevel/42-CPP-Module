NAME		= 	Karen
HEAD		=	Karen.hpp
SRCS_LIST	=	main.cpp Karen.cpp
OBJS_PATH	=	objects/
SRCS_PATH	=	./
SRCS		=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))
OBJS_LIST	=	$(patsubst %.cpp, %.o, $(SRCS_LIST))
OBJS		=	$(addprefix $(OBJS_PATH),$(OBJS_LIST))
RM			= 	rm -rf
CXX			=	clang++
CXXFLAGS	=	-Wall -Wextra -Werror -g -std=c++98

.PHONY: all clean fclean re run mkfiles

all: $(NAME)

$(NAME): $(OBJS_PATH) $(OBJS)
	$(CXX) $(CXXFLAGS) -I $(HEAD) $(OBJS) -o $(NAME)

$(OBJS_PATH):
	mkdir -p $(OBJS_PATH)

$(OBJS_PATH)%.o : $(SRCS_PATH)%.cpp $(HEAD)
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: all
	./$(NAME)

mkfiles:
	touch $(SRCS_LIST)

clean:
	$(RM) $(OBJS_PATH)

fclean: clean
	$(RM) $(NAME)

re: fclean all
