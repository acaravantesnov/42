# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acaravan <acaravan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/14 14:02:23 by acaravan          #+#    #+#              #
#    Updated: 2020/12/14 15:26:04 by acaravan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BSQ
SRCS = main.c
FLAGS = -Wall -Wextra -Werror
CLEAN = rm -f
CC = cc

all:	
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
		$(CLEAN) $(NAME)
fclean:	clean
		$(CLEAN) *.o .DS_Store
norma:
		norminette -R CheckForbiddenSourceHeader