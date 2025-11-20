/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:28:48 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/20 17:46:05 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*int	main(void)
{
	int test1;
	int test2;
	int test3;

	test1 = -10;
	test2 = 15;
	test3 = 255;

	printf("%d\n",ft_isascii(test1));
	printf("%d\n",ft_isascii(test2));
	printf("%d\n",ft_isascii(test3));
	return (0);
}*/
