/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:50:11 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/15 17:15:21 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str = (unsigned char *)s;
    unsigned char cr = (unsigned char)c;
    while (n--)
    {
        if(*str == cr)
            return ((void *)str);
        s++;
    }
    return (NULL);
}