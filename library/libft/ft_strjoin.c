/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:51:26 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/29 20:40:59 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	int		i;
	int		j;
	int		full_len;

	i = 0;
	j = 0;
	full_len = ft_strlen(s1) + ft_strlen(s2);
	joined = (char *)malloc(sizeof(char) * (full_len +1));
	if (!s1 || !s2 || !joined)
		return (NULL);
	while (s1[i] != '\0')
	{
		joined[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		joined[i] = s2[j];
		i++;
		j++;
	}
	joined[i] = '\0';
	return (joined);
}

/*int	main(void)
{
	const char test1[] = "Howdy Ya'll";
	const char test2[] = "What's going on here";
	char *result;

	printf("Ori test1 : %s\n", test1);
	printf("Ori test2 : %s\n", test2);

	result = ft_strjoin(test1, test2);

	printf("Joined : %s\n", result);
	free(result);
	return (0);
}*/
