/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:51:18 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/18 10:55:26 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cr;
	size_t	i;
    char *str;

	cr = (char)c;
	str = (char *)s;
    i = 0;
	while (str[i])
	{
		if (str[i] == cr)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
