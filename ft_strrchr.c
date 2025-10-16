/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:43:06 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/16 13:58:08 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char cr;
	int i;
	char *p;
	cr = (char)c;
	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i++])
	{
		if (s[i] == cr)
		{
			p = &s[i];
		}
	}
	if (s[i] == cr)
		return (&s[i]);
	return (NULL);
}
