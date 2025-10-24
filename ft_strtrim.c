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

int	is_in(char c, char const *str)
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
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[i] && is_in(s1[i], set))
	{
		i++;
	}
	if (i == ft_strlen(s1))
		return (ft_strdup(""));
	while (j >= 0 && is_in(s1[j], set))
	{
		j--;
	}
	str = ft_substr(s1, i, j - i + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	return (str);
}
