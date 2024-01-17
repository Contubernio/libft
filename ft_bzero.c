/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:12:16 by albealva          #+#    #+#             */
/*   Updated: 2024/01/15 18:02:28 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, unsigned long len)
{
	unsigned char	*p;
	unsigned long	i;

	p = b;
	i = 0;
	while (i < len)
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