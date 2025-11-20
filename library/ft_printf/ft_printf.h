/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <sramasam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 19:19:36 by sramasam          #+#    #+#             */
/*   Updated: 2025/07/08 11:50:11 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEXA_UPPER "0123456789ABCDEF"
# define HEXA_LOWER "0123456789abcdef"

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *input, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int n);
int	ft_printhexa_upper(unsigned int n);
int	ft_printhexa_lower(unsigned int n);
int	ft_ptraddress(unsigned long n);

#endif
