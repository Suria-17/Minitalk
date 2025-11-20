/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:02:23 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/29 16:35:25 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*dest;

	size = ft_strlen(s);
	dest = (char *)malloc(size * sizeof(char) + 1);
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s, size);
	dest[size] = '\0';
	return (dest);
}

/*int	main(void)
{
	const char *original = "Hello, World!";
	char *dup = strdup(original);
	
	printf("Original : %s\n", original);
	printf("Duplicate: %s\n", dup);
	return (0);
}*/
