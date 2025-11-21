# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sramasam <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/20 13:43:56 by sramasam          #+#    #+#              #
#    Updated: 2025/11/21 12:16:51 by sramasam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= minitalk
SERVER		= server
CLIENT		= client

CC		= cc
RM		= rm -rf
CFLAGS		= -Wall -Wextra -Werror

LIBFT_DIR	= ./library/libft
PRINTF_DIR	= ./library/ft_printf

LIBFT_ARC	= $(LIBFT_DIR)/libft.a
PRINTF_ARC	= $(PRINTF_DIR)/ft_printf.a

all: libft ft_printf server client

libft:
	make -C $(LIBFT_DIR)

ft_printf:
	make -C $(PRINTF_DIR)

server: server.c
	$(CC) $(CFLAGS) server.c $(LIBFT_ARC) $(PRINTF_ARC) -I$(LIBFT_DIR) -I$(PRINTF_DIR) -o $(SERVER)

client: client.c
	$(CC) $(CFLAGS) client.c $(LIBFT_ARC) $(PRINTF_ARC) -I$(LIBFT_DIR) -I$(PRINTF_DIR) -o $(CLIENT)

clean:
	make clean -C $(LIBFT_DIR)
	make clean -C $(PRINTF_DIR)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	make fclean -C $(PRINTF_DIR)
	$(RM) $(SERVER) $(CLIENT)

re: fclean all

.PHONY: all clean fclean re libft ft_printf
