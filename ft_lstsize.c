/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:15:22 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/20 18:17:51 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_lstsize(t_list *lst)
{
    t_list *curr;
    int     size;

    size = 0;
    curr = lst;
    while (curr)
    {
        size++;
        curr = curr->next;
    }
    
}