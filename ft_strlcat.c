/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:12:47 by albealva          #+#    #+#             */
/*   Updated: 2024/01/09 15:21:19 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	count;
	size_t	src_size;

	count = 0;
	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (size == 0)
		return (size + src_size);
	while ((src[count] != '\0') && (count + dst_size < size - 1))
	{
		dst[dst_size + count] = src[count];
		count++;
	}
	dst[dst_size + count] = '\0';
	if (dst_size < size)
		return (dst_size + src_size);
}
