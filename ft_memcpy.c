/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:23:40 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/21 17:31:03 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*sr;
	unsigned char	*dst;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	sr = (unsigned char *)src;
	dst = (unsigned char *)dest;
	i = 0;
	while (n--)
	{
		dst[i] = sr[i];
		i++;
	}
	return (dest);
}
