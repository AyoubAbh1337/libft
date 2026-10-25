/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblmouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 14:11:37 by ayblmouh          #+#    #+#             */
/*   Updated: 2026/10/17 15:16:14 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrchr(const void *s, int c, size_t n)
{
	const unsigned char *p;

	if (!s || n == 0)
		return (NULL);

	p = s;
	while(n > 0)
	{
		if(p[n - 1] == (unsigned char) c)
			return (void *)(p + n - 1);
		n--;
	}
	return (NULL);
}
