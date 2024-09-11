# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/09 10:20:04 by rchavez           #+#    #+#              #
#    Updated: 2024/09/11 09:57:10 by rchavez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = plane.a

HSRC = Fixed.h Plane.h

SRC = Fdouble.c Ffloat.c Fint.c Fmath.c Fangle.c Plane.c Ppoint.c Pray.c\
	Pstring.c

OBJ = $(SRC:%.c=%.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJ) | $(HSRC)
	ar rcs $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $^

clean :
	rm -fr $(OBJ)

fclean : clean
	rm -fr $(NAME)

re : fclean all

.PHONY : all clean fclean re