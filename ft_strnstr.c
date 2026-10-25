/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblmouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:07:46 by ayblmouh          #+#    #+#             */
/*   Updated: 2026/10/19 15:50:45 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!little || !big)
		return (NULL);

	if (little[0] == '\0')
		return ((char *)big);

	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while ((i + j < len) && big[i + j] && little[j] && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

#include <stdio.h>

int	main()
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;

	ptr = ft_strnstr(largestring, smallstring, 7);
	printf("%s", ptr);
}
