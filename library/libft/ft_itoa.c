/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 22:38:32 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/31 15:17:12 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_printstring(char *s, unsigned long number, long int len)
{
	while (number > 0)
	{
		s[len--] = '0' + (number % 10);
		number = number / 10;
	}
	return (s);
}

static long int	ft_len(int n)
{
	long int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*s;
	long int		len;
	long			number;

	len = ft_len(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len--] = '\0';
	number = (long)n;
	if (number == 0)
		s[0] = '0';
	else
	{
		if (number < 0)
		{
			number = -number;
			s[0] = '-';
		}
		s = ft_printstring(s, number, len);
	}
	return (s);
}

/*int	main(void)
{
	char	*str;

	str = ft_itoa(0);
	if (str)
	{
		printf("ft_itoa(0) = \"%s\"\n", str);
		free(str);
	}

	str = ft_itoa(123);
	if (str)
	{
		printf("ft_itoa(123) = \"%s\"\n", str);
		free(str);
	}

	str = ft_itoa(-123);
	if (str)
	{
		printf("ft_itoa(-123) = \"%s\"\n", str);
		free(str);
	}

	str = ft_itoa(2147483647);
	if (str)
	{
		printf("ft_itoa(2147483647) = \"%s\"\n", str);
		free(str);
	}
	
	str = ft_itoa(-2147483648);
	if (str)
	{
		printf("ft_itoa(-2147483648) = \"%s\"\n", str);
		free(str);
	}
	return (0);
}*/
