/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 10:38:16 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/29 15:34:03 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			last = s;
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return ((char *)last);
}

/*int	main(void)
{
	char test1[] = "Hello People";
	char test2[] = "How are ya'll doing?";

	printf("Before test1 : %s\n", test1);
	printf("Before test2 : %s\n", test2);

	char *result1 = ft_strrchr(test1, 'l');
	char *result2 = ft_strrchr(test2, 'w');

	printf("l is found in test1 : %s\n", result1);
	printf("w is found in test2 : %s\n", result2);
	return (0);
}*/
