/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:59:35 by albealva          #+#    #+#             */
/*   Updated: 2024/01/25 16:07:27 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = ft_strlen(src);
	if (destsize == 0)
		return (res);
	while (src[i] != '\0' && i < (destsize - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (res);
}

/*
int	main()
{
	char	src[] = "Copy this";
	char	dest[20];

	size_t copied = ft_strlcpy(dest, src, sizeof(dest));
	printf("Copied %zu characters.\n", copied);
	printf("Destination buffer: '%s'\n", dest);
	return (0);
}
*/