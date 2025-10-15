/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:20:16 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/14 11:40:10 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	while (is_in(set, s1[i]))
	{
		i++;
	}
	j = 0;
	while (!is_in(set, s1[i]))
	{
		j++;
		i++;
	}
	str = ft_substr(s1, i - j, j);
	if (str == NULL)
	{
		return (NULL);
	}
	return (str);
}
