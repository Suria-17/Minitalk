/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:22:11 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/31 15:25:16 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int d)
{
	return (d >= '0' && d <= '9');
}

/*int main (void)
{
	int test1;
	char test2;

	test1 = '8';
	test2 = 'a';

	printf("%d\n", ft_isdigit(test1));
	printf("%d\n", ft_isdigit(test2));
	return (0);
}*/
