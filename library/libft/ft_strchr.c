/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 10:21:17 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/29 15:32:43 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

/*int	main(void)
{
	char test1[] = "Hello people";
	char test2[] = "How are ya'll doing?";

	printf("Before test1 : %s\n", test1);
	printf("Before test2 : %s\n", test2);

	char *result1 = ft_strchr(test1, 'p');
	char *result2 = ft_strchr(test2, '?');

	if (result1)
		printf("P is in test1 at : %s\n", result1);
	else
		printf("P not found\n");

	if (result2)
		printf("? is in test2 at : %s\n", result2);
	else
		printf("? not found\n");
	return (0);
}*/
