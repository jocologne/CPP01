# Variables
NAME = brainz
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
HEADER = Zombie.hpp
SRCS = main.cpp \
       newZombie.cpp \
       randomChump.cpp \
       Zombie.cpp
OBJDIR = obj
OBJS = $(addprefix $(OBJDIR)/, $(notdir $(SRCS:.cpp=.o)))

# Rules
all: $(NAME)

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: %.cpp $(HEADER) | $(OBJDIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "Compiled $<"

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) -o $@ $(OBJS)
	@echo "Successfully built $(NAME)"

clean:
	@rm -rf $(OBJDIR)
	@echo "Removed object files"

fclean: clean
	@rm -f $(NAME)
	@echo "Removed $(NAME)"

re: fclean all

.PHONY: all clean fclean re