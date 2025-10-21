/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 10:20:33 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/21 14:50:35 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*lst_creator(int size)
{
	t_list	*curr;
	t_list	*head;
	t_list	*temp;

	curr = malloc(sizeof(t_list));
	if (!curr)
		return (NULL);
	head = curr;
	while (size--)
	{
		temp = malloc(sizeof(t_list));
		if (!temp)
			return (NULL);
		curr->next = temp;
		curr = curr->next;
	}
	curr->next = NULL;
	return (head);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*curr;
	t_list	*copy;
	t_list	*head;
	int		size;

	if (!lst || !f || !del)
		return (NULL);
	size = ft_lstsize(lst);
	curr = lst;
	copy = lst_creator(size);
	if (!copy)
		return (NULL);
	head = copy;
	while (curr)
	{
		copy->content = f(curr->content);
		copy = copy->next;
		curr = curr->next;
	}
	return (head);
}
