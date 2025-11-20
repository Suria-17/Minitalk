/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:20:09 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/30 17:07:17 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	length;
	char			*output;

	if (!s || !f)
		return (NULL);
	length = ft_strlen(s);
	output = malloc(length * sizeof(char) + 1);
	if (!output)
		return (NULL);
	i = 0;
	while (i < length)
	{
		output[i] = (*f)(i, s[i]);
		i++;
	}
	output[i] = '\0';
	return (output);
}

/*char to_upper(unsigned i, char c)
{
	(void)i;
	return ft_toupper(c);
	
}

int	main(void)
{

	char str[] = "hello lovely people!";

	printf("Ori : %s\n", str);

	char *result = ft_strmapi(str, to_upper);
	
	printf("After : %s\n", result);
	free(result);
	return (0);
}*/
