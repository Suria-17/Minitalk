/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:45:05 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/29 15:45:13 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char *test1 = "abc";
	const char *test2 = "abz";
	size_t n = 3;

	printf("After cmp : %d\n", ft_memcmp(test1, test2, 3));
	printf("After stdcmp : %d\n", memcmp(test1, test2, 3));
	return (0);
}*/
