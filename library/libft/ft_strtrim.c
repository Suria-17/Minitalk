/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 20:37:46 by sramasam          #+#    #+#             */
/*   Updated: 2025/06/04 18:13:21 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_c_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	first;
	size_t	last;

	first = 0;
	last = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[first] != '\0' && ft_c_in_set(s1[first], set))
		first++;
	while (last > first && ft_c_in_set(s1[last - 1], set))
		last--;
	trimmed = (char *)malloc(sizeof(*s1) * (last - first + 1));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + first, last - first + 1);
	return (trimmed);
}

/*int	main(void)
{
	char const test1[] = "my name is name";
	char *result;

	printf("Ori : %s\n", test1);

	result = ft_strtrim(test1, "name");
	printf("After : %s\n", result);
	free(result);
	return (0);
}*/
