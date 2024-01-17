/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:48:58 by albealva          #+#    #+#             */
/*   Updated: 2024/01/15 18:02:36 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	count;
	char	*buffer;

	buffer = (char *)str;
	count = 0;
	while (count < n)
	{
		if (buffer[count] == c)
			return (buffer + count);
		count++;
	}
	return (NULL);
}
