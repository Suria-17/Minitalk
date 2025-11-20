/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 23:20:42 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/30 17:16:52 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*void	to_upper(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c = *c -32;
}

int	main(void)
{
	char str[] = "hello, everyone!";

	printf("Ori : %s\n", str);

	ft_striteri(str, to_upper);
	printf("After : %s\n", str);
	return (0);
}*/
