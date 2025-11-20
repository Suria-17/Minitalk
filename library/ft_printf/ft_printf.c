/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <sramasam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 07:16:00 by sramasam          #+#    #+#             */
/*   Updated: 2025/07/08 11:49:43 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_con(va_list args, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar(va_arg(args, int));
	else if (c == 's')
		count = ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		count = ft_ptraddress(va_arg(args, unsigned long));
	else if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		count = ft_putunbr(va_arg(args, unsigned int));
	else if (c == 'x')
		count = ft_printhexa_lower(va_arg(args, unsigned int));
	else if (c == 'X')
		count = ft_printhexa_upper(va_arg(args, unsigned int));
	else if (c == '%')
		count = ft_putchar('%');
	else
		count = ft_putchar(c);
	return (count);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%' && input[i + 1])
		{
			len += ft_check_con(args, input[i + 1]);
			i += 2;
		}
		else
		{
			len += ft_putchar(input[i]);
			i++;
		}
	}
	va_end(args);
	return (len);
}
