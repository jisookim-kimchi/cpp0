NAME = PhoneBook

CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_DIR = Src/
OBJ_DIR = obj/
HEADER_DIR = Header/

# .cpp files change path
# $(var : pattern=replacement)
SRC = $(wildcard $(SRC_DIR)*.cpp)
OBJ = $(SRC:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o)

all: $(NAME)

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CFLAGS) -I$(HEADER_DIR) -c $< -o $@

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) -o $@ $^

clean :
	rm -rf $(OBJ_DIR) $(NAME)

fclean : clean
	rm -f $(NAME)

re : fclean all	

.PHONY: all clean fclean re