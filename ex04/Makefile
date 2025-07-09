# Nome do executável
NAME = replace

# Compilador e flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Fonte e objetos
SRC = replace.cpp
OBJ = $(SRC:.cpp=.o)

# Regra principal
all: $(NAME)

# Como gerar o executável
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

# Remover arquivos .o
clean:
	rm -f $(OBJ)

# Remover tudo (inclui binário)
fclean: clean
	rm -f $(NAME)

# Recompilar do zero
re: fclean all

.PHONY: all clean fclean re
