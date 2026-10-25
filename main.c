/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblmouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:38:10 by ayblmouh          #+#    #+#             */
/*   Updated: 2026/10/14 10:32:14 by ayblmouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	c;

	printf("Enter character: ");
	scanf(" %c", &c);
	if (ft_isalpha(c))
		printf("Is alpha\n");
	else if (ft_isdigit(c))
		printf("Is digit\n");
	else
		printf("Other character.\n");
	return (0);
}
