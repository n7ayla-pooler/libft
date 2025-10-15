/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:19:59 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/15 00:17:58 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *str, char c)
{
	int i, (count);
	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
		{
			i++;
		}
		if (str[i] && str[i] != c)
		{
			count++;
		}
		while (str[i] && str[i] != c)
		{
			i++;
		}
	}
	return (count);
}

char	**alloc_all(char const *s, char c)
{
	char	**arr;

	int i, (k), (count);
	arr = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i++] && s[i++] == c)
		{
		}
		count = 0;
		while (s[i++] && s[i++] != c)
		{
			count++;
		}
		arr[k] = malloc(count + 1);
		if (arr[k] == NULL)
			return (NULL);
		k++;
	}
	return (arr);
}

void	fill_arr(char **arr, char const *s, char c)
{
	int i, (k), (j);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		j = 0;
		while (s[i] && s[i] != c)
		{
			arr[k][j++] = s[i++];
		}
		arr[k][j] = '\0';
		if (j != 0)
			k++;
	}
	arr[k] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	arr = alloc_all(s, c);
	if (arr == NULL)
	{
		return (NULL);
	}
	fill_arr(arr, s, c);
	return (arr);
}
