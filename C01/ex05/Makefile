# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 21:32:00 by bleaf             #+#    #+#              #
#    Updated: 2022/10/26 17:38:49 by bleaf            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp Harl.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -std=c++98 -Wall -Wextra -Werror -I.

NAME			= harl2.0
all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS)  $(OBJS) -o $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

leakage: $(NAME)
		leaks --atExit -- ./$(NAME)

.PHONY:			all clean fclean re