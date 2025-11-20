/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:40:54 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/29 15:28:05 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
	return (s);
}

/*int	main(void)
{
	char buf[50] = "Hello Peter!";

	printf("Before bzero : %s\n", buf);
	ft_bzero(buf + 6, 5);
	printf("After bzero : %s\n", buf);
	return (0);
}*/
