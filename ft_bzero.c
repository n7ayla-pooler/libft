/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 06:47:34 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/15 06:50:22 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*sr;

	sr = (char)s;
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		sr[i++] = 0;
	}
}
