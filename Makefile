# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cshi <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/31 07:54:46 by cshi              #+#    #+#              #
#    Updated: 2016/07/31 07:54:50 by cshi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
CC = gcc
INCLUDES = ft.h
SRCS = ft_chkin.c main.c ft_lib.c ft_rushdisplay.c ft_rushlib.c ft_corner.c
CFLAGS = -Wall -Wextra -Werror
COPTION = -o $(NAME) -I $(INCLUDES)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(COPTION) $(SRCS)

clean:
	/bin/rm -f ft.h.gch
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
