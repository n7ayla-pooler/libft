/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 08:55:58 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/15 16:30:28 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbrlen(int nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	while (nbr)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	char	*nptr;
	int		i;

	nptr = malloc((nbrlen(nbr) + 1) * sizeof(char));
	if (nptr == NULL)
		return (NULL);
	i = nbrlen(nbr) - 1;
	nptr[nbrlen(nbr)] = '\0';
	if (nbr < 0)
	{
		nptr[0] = '-';
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		nptr[i] = (nbr % 10) + '0';
		nbr /= 10;
		i--;
	}
	return (nptr);
}
