/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:16:03 by sramasam          #+#    #+#             */
/*   Updated: 2025/05/31 15:25:00 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c)) || (ft_isdigit(c)))
		return (1);
	return (0);
}

/*int	main(void)
{
	int	test1;
	char	test2;
	int	test3;

	test1 = 'A';
	test2 = '5';
	test3 = '-';

        printf("%d\n", ft_isalnum(test1));
        printf("%d\n", ft_isalnum(test2));
	printf("%d\n", ft_isalnum(test3));
        return (0);
}*/
