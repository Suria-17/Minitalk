/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:12:09 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/29 16:24:16 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}

/*int	main(void)
{
	char buf1[50] = "Hello World!#&";
	char buf2[50] = "Hello David!#&";
	char buf3[50];

	printf("Before ft_memcpy : %s\n", buf1);
	ft_memcpy(buf3, buf1 + 6, 5);
	printf("After ft_memcpy : %s\n", buf3);

	printf("Before memcpy : %s\n", buf1);
	memcpy(buf3, buf1 + 6, 5);
	printf("After memcpy : %s\n", buf3);
	return (0);
}*/
