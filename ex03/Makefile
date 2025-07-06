
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

NAME := violence

SRC_DIR := .
OBJ_DIR := obj
INC_DIR := .

SRCS := main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))
HEADERS := Weapon.hpp HumanA.hpp HumanB.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADERS) | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re