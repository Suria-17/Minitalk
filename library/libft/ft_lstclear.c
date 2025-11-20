/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sramasam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 17:47:08 by sramasam          #+#    #+#             */
/*   Updated: 2025/06/04 17:55:33 by sramasam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*saved;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		saved = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = saved;
	}
	*lst = NULL;
}
