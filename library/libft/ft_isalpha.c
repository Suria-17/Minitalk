/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:59:44 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/19 19:11:30 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*int main(void)
{
	char test1;
	char test2;

	test1 = 'a';
	test2 = '-';

	printf("%d\n", ft_isalpha(test1));
	printf("%d\n", ft_isalpha(test2));
	return(0);
}*/
