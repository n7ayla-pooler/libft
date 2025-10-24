/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 09:03:23 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/24 09:05:25 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_all(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

int	count_letters(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**fill_arr(char const *s, char c, int a, int i, int j)
{
	char	**arr;

	int k;
	k = count_words(s, c);
	arr = malloc(sizeof(char *) * (k + 1));
	if (!arr)
		return (NULL);
	while (a < k)
	{
		while (s[j] && s[j] == c)
			j++;
		arr[a] = malloc(sizeof(char) * (count_letters(&s[j], c) + 1));
		if (!arr[a])
			return (NULL);
		i = count_letters(&s[j], c);
		ft_strlcpy(arr[a], &s[j], i + 1);
		j += count_letters(&s[j], c);
		a++;
	}
	arr[a] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	arr = fill_arr(s, c, 0, 0, 0);
	if (!arr)
	{
		free_all(arr);
		return (NULL);
	}
	return (arr);
}
