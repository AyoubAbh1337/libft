/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblmouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:40:03 by ayblmouh          #+#    #+#             */
/*   Updated: 2026/10/19 12:09:35 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	s_d;
	size_t	s_s;

	if (!dst || !src)
		return (ft_strlen(dst));

	s_s = ft_strlen(src);
        s_d = ft_strlen(dst);
	j = s_d;
//        printf("s: %zu\nd: %zu\n", s_s, s_d);

	if(size != 0)
	{
		i = 0;
		while (i < size && src[i])
		{
			dst[j] = src[i];
				j++;
			i++;
		}
	}
	dst[i] = '\0';
	return (s_s + s_d);
}

int	main(void)
{
	char dst[] = "Hello";
	char src[] = "world";
//	/*printf("%zu\n", */ft_strlcat(dst, src, sizeof(dst));
//	printf("my: %s\n", dst);
	strlcat(dst, src, sizeof(dst));
	printf("yo: %s\n", dst);
}
