NAME = megaphone

CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_DIR = src/
OBJ_DIR = obj/
INC_DIR = include/

# .cpp files change path
# $(var : pattern=replacement)
SRC = $(wildcard $(SRC_DIR)*.cpp)
OBJ = $(SRC:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o)

# ALL
all : $(NAME)

# [%] is a wildcard that matches any string
# [-c] means compile only, do not link
# [$<] is the first dependency in the rule, which is the source file
$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

# if dependency files exist, make Target
# how make it knows which files to compile [$^] is all the dependencies and [-o] is output file
# [$@] is the target name in current rule

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) -o $@ $^

clean :
	rm -rf $(OBJ_DIR) $(NAME)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re

