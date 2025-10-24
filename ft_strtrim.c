/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:20:16 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/23 10:09:43 by abdnahal         ###   ########.fr       */
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
	if (c == str[i])
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[i] && is_in(set, s1[i]))
	{
		i++;
	}
	j = ft_strlen(s1) - 1;
	while (j >= 0 && is_in(set, s1[j]))
	{
		j--;
	}
	if (j < i)
		return (ft_strdup(""));
	str = ft_substr(s1, i, j - i + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	return (str);
}
