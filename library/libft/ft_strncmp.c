/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:22:17 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/29 15:35:14 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char *test1 = "HelloWorld";
	const char *test2 = "HelloYou";

	printf("Before test1 = %s\n", test1);
	printf("Before test2 = %s\n", test2);

	int result = ft_strncmp(test1, test2, 6);

	if (result == 0)
		printf("Char are equal. %d\n", result);
	else
		printf("Char are different. %d\n", result);
	return (0);
}*/
