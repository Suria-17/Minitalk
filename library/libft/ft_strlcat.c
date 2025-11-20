/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 17:54:00 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/28 15:59:52 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	dest_len = 0;
	src_len = 0;
	while (dest_len < dsize && dst[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dest_len == dsize)
		return (dsize + src_len);
	while (dest_len + i + 1 < dsize && src[i] != '\0')
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	if (dest_len + i < dsize)
	{
		dst[dest_len + i] = '\0';
	}
	return (dest_len + src_len);
}

/*int	main(void)
{
	char		dest[50] = "Hello ";
	const char	src[] = "World";

	printf("Dest Before : %s\n", dest);
	printf("Src Before : %s\n", src);

	ft_strlcat(dest, src, 12);
	printf("Dest After : %s\n", dest);
	printf("Src After : %s\n", src);
	return (0);
}*/
