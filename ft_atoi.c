/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblmouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 17:29:56 by ayblmouh          #+#    #+#             */
/*   Updated: 2026/10/20 16:22:44 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	long	res;

	if (!nptr)
		return (0);

	i = 0;
	res = 0;
	sign = 1;
	while (nptr[i] >= 9 && nptr[i] <= 13 || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (res >= (9223372036854775807 - (nptr[i] - '0')) / 10)
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
		res = (res * 10) + (nptr[i] - 48);
		i++;
	}
	return ((int)(res * sign));
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d\n", ft_atoi("9223372036854775810"));
    printf("%d\n", atoi("9223372036854775810"));
}
