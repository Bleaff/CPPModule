CC = g++
CFLAGS	= -std=c++98 -Wall -Wextra -Werror 
NAME = megaphone
RM		=	rm -rf

all: $(NAME)

$(NAME):	$(OBJ)
		$(CC) $(CFLAGS) megaphone.cpp  -o $(NAME)
clean:
		$(RM) $(NAME)

fclean:	clean

re:	fclean all
.PHONY:		all clean fclean re
