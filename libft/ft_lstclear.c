/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kceylan <kceylan@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:18:17 by kceylan           #+#    #+#             */
/*   Updated: 2022/02/21 16:19:20 by kceylan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*array;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		array = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = array;
	}
	*lst = NULL;
}
