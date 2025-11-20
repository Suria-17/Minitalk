/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_essential.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <sramasam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 17:38:48 by sramasam          #+#    #+#             */
/*   Updated: 2025/07/08 11:49:38 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	char	d;
	int		len;

	len = 0;
	if (n == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	if (n < 0)
	{
		len += write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		len += ft_putnbr(n / 10);
	d = (n % 10) + '0';
	len += write(1, &d, 1);
	return (len);
}

int	ft_putunbr(unsigned int n)
{
	char	d;
	int		len;

	len = 0;
	if (n >= 10)
		len += ft_putunbr(n / 10);
	d = (n % 10) + '0';
	len += write(1, &d, 1);
	return (len);
}
