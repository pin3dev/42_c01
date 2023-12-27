NAME = weapon

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPP = c++

SRC = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

HEADER = HumanA.hpp HumanB.hpp Weapon.hpp

OBJ=$(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean fclean re