/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:12:47 by albealva          #+#    #+#             */
/*   Updated: 2024/01/19 14:36:12 by albealva         ###   ########.fr       */
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
