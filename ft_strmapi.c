/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:44:04 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/16 17:04:58 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*sub;
	unsigned int	i;

	if (s == NULL)
	{
		return (NULL);
	}
	sub = malloc(ft_strlen(s) + 1);
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		sub[i] = f(i, s[i]);
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
