/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 09:46:06 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/27 09:55:20 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"
#include <stdio.h>*/

int	ft_tolower(int c)
{
	while (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*int	main (void)
{
	char test1[] = "ABCDEFG";
	char test2[] = "hIJKLMn";
	char test3[] = "JHG*&$(";

	printf("Before test1 : %s\n", test1);
	printf("Before test2 : %s\n", test2);
	printf("Before test3 : %s\n", test3);

	int i = 0;
	while (test1[i] != '\0')
	{
		test1[i] = ft_tolower(test1[i]);
		i++;
	}

	int j = 0;
	while (test2[j] != '\0')
	{
		test2[j] = ft_tolower(test2[j]);
		j++;
	}

	int k = 0;
	while (test3[k] != '\0')
	{
		test3[k] = ft_tolower(test3[k]);
		k++;
	}

	printf("After test1 : %s\n", test1);
	printf("After test2 : %s\n", test2);
	printf("After test3 : %s\n", test3);
	return (0);
}*/
