/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:29:13 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/20 18:31:16 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list   *ft_lstlast(t_list *lst)
{
    t_list *curr;

    if (!lst)
        return (NULL);
    curr = lst;
    while (curr->next)
    {
        curr = curr->next;
    }
    return (curr);
}