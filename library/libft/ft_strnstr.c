/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:20:09 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/29 15:48:12 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while ((i + j) < len && big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char *str = "Hello people of planet earth";
	const char *sub1 = "people";
	const char *sub2 = "net";
	const char *sub3 = "ear";
	const char *sub4 = "th";
	const char *sub5 = "";

	printf("searched people in main str : %s\n", ft_strnstr(str, sub1, 15));
	return (0);
}*/
