/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:35:22 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/21 17:36:56 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*sr;

	if (!dest && !src)
		return (NULL);
	dst = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (src > dest)
		ft_memcpy(dest, src, n);
	else
	{
		while (n--)
			dst[n] = sr[n];
	}
	return (dest);
}
