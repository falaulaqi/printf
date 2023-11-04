# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fal-awla <fal-awla@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/27 15:03:14 by fal-awla          #+#    #+#              #
#    Updated: 2023/10/31 16:41:49 by fal-awla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_printf.c\
ft_putchar.c\
ft_str.c\
ft_num.c\
ft_hexnumnum.c\
ft_hexnum.c\
ft_ptr.c\
ft_unsingednum.c\

OBJS = $(SRCS:.c=.o)



NAME = libftprintf.a

CC      = cc
RM      = rm -f
CFLAGS  = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
