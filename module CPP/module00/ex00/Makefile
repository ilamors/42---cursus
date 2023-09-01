NAME = megaphone

SRC		=	megaphone.cpp

CC 		= c++

FLAGS	= -std=c++98 -Wall -Wextra -Werror 

OBJS 	= $(SRC:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME) $(OBJS)

%.o: %.c
		$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(NAME) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re