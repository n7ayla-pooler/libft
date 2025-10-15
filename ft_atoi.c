/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdnahal <abdnahal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 06:53:32 by abdnahal          #+#    #+#             */
/*   Updated: 2025/10/15 07:10:26 by abdnahal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int i, (sign), (nbr);	
    if (!nptr)
		return (0);
	i = 0;
	sign = 1;
	nbr = 0;
	while (nptr[i])
	{
		while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
			i++;
		if (nptr[i] == '-' || nptr[i] == '+')
		{
			if (nptr[i] == '-')
				sign *= -1;
			i++;
		}
		while (nptr[i] >= '0' && nptr[i] <= '9')
			nbr = nbr * 10 + nptr[i++] - '0';
		break ;
	}
	return (nbr * sign);
}
