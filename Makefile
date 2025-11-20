# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sramasam <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/20 13:43:56 by sramasam          #+#    #+#              #
#    Updated: 2025/11/20 13:59:47 by sramasam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= minitalk
SERVER		= server
CLIENT		= client
SERVER_B	= server_bonus
CLIENT_B	= client_bonus

CC		= cc
RM		= rm -rf
CFLAGS		= -Wall -Wextra -Werror

LIBFT_DIR	= ./library/libft
PRINTF_DIR	= ./library/ft_printf

LIBFT_LIB	= $(LIBFT_DIR)/libft.a
PRINTF_LIB	= $(PRINTF_DIR)/ft_printf.a

all: libft ft_printf
