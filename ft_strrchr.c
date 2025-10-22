/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:43:06 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/22 09:58:52 by abdnahal         ###   ########.fr       */
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
	i = ft_strlen(s);
	if (i == 0 && c == 0)
		return (&str[i]);
	if (c == 0)
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

// int main()
// {
// 	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
// 	char *d1 = strrchr(src, '\0');
// 	char *d2 = ft_strrchr(src, '\0');
// 	printf("%p\n%p", d1, d2);
// }