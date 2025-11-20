/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 09:28:31 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/28 16:00:53 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*int	main(void)
{
	char test1[] = "abcdefg";
	char test2[] = "HijkLmN";

	printf("Before test1: %s\n", test1);
	printf("Before test2: %s\n", test2);

	int i = 0;
	while (test1[i] != '\0')
	{
		test1[i] = ft_toupper(test1[i]);
		i++;
	}

	int j=0;
	while (test2[j] != '\0')
	{
		test2[j] = ft_toupper(test2[j]);
		j++;
	}

	printf("After test1: %s\n", test1);
	printf("After test2: %s\n", test2);
	return (0);
}*/
