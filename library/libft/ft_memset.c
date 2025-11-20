/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 10:58:18 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/28 16:12:36 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len > 0)
	{
		*p = (unsigned char)c;
		p++;
		len--;
	}
	return (b);
}

/*int	main(void)
{
	char buf1[50] = "Hello Peter!";
	char buf2[50] = "Hello Peter!";

	printf("Before ft_memset : %s\n", buf1);
	ft_memset(buf1 + 6, '*', 5);
	printf("After ft_memset : %s\n", buf1);


	printf("Before memset : %s\n", buf2);
	memset(buf2 + 6, '*', 5);
	printf("After memset : %s\n", buf2);
	return (0);
}*/
