# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 21:32:00 by bleaf             #+#    #+#              #
#    Updated: 2022/11/10 16:16:09 by bleaf            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp Casting.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -f
CXXFLAGS		= -std=c++98 -Wall -Wextra -Werror -I.

NAME			= Casting
all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS)  $(OBJS) -o $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re