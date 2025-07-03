NAME = zombieHorde

SRC = Zombie.cpp zombieHorde.cpp main.cpp
OBJDIR = obj
OBJ = $(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@rmdir $(OBJDIR) 2>/dev/null || true

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re