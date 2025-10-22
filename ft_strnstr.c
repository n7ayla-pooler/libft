/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:00:54 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/22 10:07:21 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i, (k);
	if (!(*little) || !len)
		return ((char *)big);
	if (big == little)
		return ((char *)big);
	i = 0;
	while (big[i] && len--)
	{
		k = 0;
		while (little[k] && big[i] && little[k] == big[i] && len)
		{
			k++;
			i++;
			len--;
		}
		if (little[k] == '\0')
			return ((char *)&big[i - k]);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char *s1 = "AAAAAAAAAAAAA";
// 	size_t max = strlen(s1);
// 	char *i1 = strnstr(s1, s1, max);
// 	char *i2 = ft_strnstr(s1, s1, max);
// 	printf("%s\n%s", i1, i2);
// }