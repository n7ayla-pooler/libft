/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 08:55:58 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/17 13:14:45 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbrlen(long nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		count++;
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
	long	n;

	n = nbr;
	nptr = malloc((nbrlen(n) + 1) * sizeof(char));
	if (nptr == NULL)
		return (NULL);
	i = nbrlen(n) - 1;
	nptr[nbrlen(n)] = '\0';
	if (n < 0)
	{
		nptr[0] = '-';
		n = -n;
	}
	else if (n == 0)
		nptr[0] = '0';
	while (n != 0)
	{
		nptr[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (nptr);
}
