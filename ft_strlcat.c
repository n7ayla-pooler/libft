/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:13:54 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/25 17:36:54 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_src;

	if (size == 0 && !dst)
		return (ft_strlen(src));
	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dest >= size)
		return (len_src + size);
	i = 0;
	while (src[i] && len_dest + i < size - 1)
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	dst[len_dest + i] = '\0';
	return (len_dest + len_src);
}
