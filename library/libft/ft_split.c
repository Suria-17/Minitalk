/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 19:07:43 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/30 21:01:04 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			words++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (words);
}

static char	*ft_cutting_word(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		j;
	int		i;

	i = 0;
	j = 0;
	words = (char **)malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!words || !s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			words[j] = ft_cutting_word(&s[i], c);
			while (s[i] != '\0' && s[i] != c)
				i++;
			j++;
		}
		else
			i++;
	}
	words[j] = 0;
	return (words);
}

/*int	main(void)
{
	int i = 0;
	char **result = ft_split("Howdy everyone", ' ');

	while (result[i])
	{
		printf("Word %d : %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
