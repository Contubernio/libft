/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:12:16 by albealva          #+#    #+#             */
/*   Updated: 2024/01/19 14:52:57 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t n)
{
	char	*p;
	size_t	i;

	p = (char *)b;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

/*
int	main(void)
{
	char	str[50];
	strcpy(str, "esto es una funcion de la libreria  string.h");
	puts(str);
	ft_bzero(str, 2);
	puts(str);
	return(0);
}
*/