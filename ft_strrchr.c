/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:43:06 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/17 17:55:28 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cr;
	int		i;
	char	*str;

	str = (char *)s;
	cr = (char)c;
	if (s == NULL)
		return (NULL);
	i = ft_strlen(s);
	if (i == 0 && c == 0)
		return (&str[i]);
	while (i-- >= 0)
	{
		if (str[i] == cr)
		{
			return (&str[i]);
		}
	}
	return (NULL);
}
