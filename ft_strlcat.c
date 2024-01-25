/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:12:47 by albealva          #+#    #+#             */
/*   Updated: 2024/01/25 16:05:21 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	count;
	size_t	j;
	size_t	src_len;

	j = 0;
	count = ft_strlen(dst);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while ((src[j]) && count < dstsize - 1)
	{
		dst[count] = src[j];
		count++;
		j++;
	}
	dst[count] = '\0';
	return (dst_len + src_len);
}

int	main()
{
	char		dst[20] = "Hello";
	const char	*src = " World";

	size_t result = ft_strlcat(dst, src, sizeof(dst));
	printf("Result: %zu\n", result);
	printf("Destination string: '%s'\n", dst);
	return (0);
}
