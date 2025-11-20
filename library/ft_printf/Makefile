# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sramasam <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/08 10:38:16 by sramasam          #+#    #+#              #
#    Updated: 2025/07/08 11:07:06 by sramasam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a

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
