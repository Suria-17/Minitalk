# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sramasam <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/08 10:38:16 by sramasam          #+#    #+#              #
#    Updated: 2025/11/21 19:22:10 by sramasam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ft_printf.a

SRCS := ft_printf.c ft_printf_essential.c ft_printf_utils.c

OBJS := $(SRCS:.c=.o)

CFLAGS := -Wall -Wextra -Werror

CC := cc

AR := ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
