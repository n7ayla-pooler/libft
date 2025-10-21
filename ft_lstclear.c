/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:08:18 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/21 14:33:17 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*prev;

	if (!lst || !(*lst) || !del)
		return ;
	curr = *lst;
	while (curr->next)
	{
		prev = curr;
		curr = curr->next;
		del(prev->content);
		free(prev);
	}
	*lst = NULL;
}
