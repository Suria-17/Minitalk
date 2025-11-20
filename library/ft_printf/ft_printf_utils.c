/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <sramasam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:11:14 by sramasam          #+#    #+#             */
/*   Updated: 2025/07/08 11:50:26 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa_upper(unsigned int n)
{
	char	d;
	int		len;

	len = 0;
	if (n >= 16)
		len += ft_printhexa_upper(n / 16);
	d = HEXA_UPPER[n % 16];
	len += write(1, &d, 1);
	return (len);
}

int	ft_printhexa_lower(unsigned int n)
{
	char	d;
	int		len;

	len = 0;
	if (n >= 16)
		len += ft_printhexa_lower(n / 16);
	d = HEXA_LOWER[n % 16];
	len += write(1, &d, 1);
	return (len);
}

int	ft_printptrhexa(unsigned long n)
{
	char	d;
	int		len;

	len = 0;
	if (n >= 16)
		len += ft_printptrhexa(n / 16);
	d = HEXA_LOWER[n % 16];
	len += write (1, &d, 1);
	return (len);
}

int	ft_ptraddress(unsigned long n)
{
	int	len;

	len = 0;
	if (n == 0)
	{
		return (write(1, "(nil)", 5));
	}
	len += write(1, "0x", 2);
	len += ft_printptrhexa(n);
	return (len);
}
