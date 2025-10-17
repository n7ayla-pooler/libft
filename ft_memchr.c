/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:50:11 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/17 13:21:18 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	cr;
	size_t			i;

	i = 0;
	cr = (unsigned char)c;
	str = (unsigned char *)s;
	while (n--)
	{
		if (str[i] == cr)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
