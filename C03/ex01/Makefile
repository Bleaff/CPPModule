# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 21:32:00 by bleaf             #+#    #+#              #
#    Updated: 2022/10/29 01:34:44 by bleaf            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp ClapTrap.cpp ScavTrap.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -f
CXXFLAGS		= -std=c++98 -Wall -Wextra -Werror -I.

NAME			= serena
all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS)  $(OBJS) -o $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re                                   
