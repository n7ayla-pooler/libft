/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:00:54 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/16 16:32:09 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i, (k);
	i = 0;
	while (big[i] && len--)
	{
		k = 0;
		while (little[k] && big[i] && little[k] == big[i])
		{
			k++;
			i++;
			len--;
		}
		if (little[k] == '\0')
			return ((char *)&big[i - k]);
		i++;
	}
	return (NULL);
}
