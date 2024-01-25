/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:22:59 by albealva          #+#    #+#             */
/*   Updated: 2024/01/25 13:01:33 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*
void *ft_memcpy(void *dst, const void *src, size_t n);

int	main(void)
{
    const char	src[] = "Test string.";
    char dst[20];

    ft_memcpy(dst, src, sizeof(src));

    printf("Destination buffer contains: '%s'\n", dst);

    return 0;
}
*/
//DESCRIPTION
//The memcpy() function copies n bytes from memory area src 
//to memory area dst.  If dst and src overlap, behavior is undefined. 
// Applications in which dst and src might overlap should use
//memmove(3) instead.