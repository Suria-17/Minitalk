/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:52:33 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/20 19:01:36 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*int	main(void)
{
	int test1;
	int test2;
	int test3;

	test1 = 10;
	test2 = 50;
	test3 = 255;

	printf("%d\n", ft_isprint(test1));
	printf("%d\n", ft_isprint(test2));
	printf("%d\n", ft_isprint(test3));
	return (0);
}*/
