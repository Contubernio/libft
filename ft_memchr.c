/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:48:58 by albealva          #+#    #+#             */
/*   Updated: 2024/01/21 17:28:46 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			count;
	unsigned char	*caststr;

	caststr = (unsigned char *)str;
	count = 0;
	while (count < n)
	{
		if (caststr[count] == (unsigned char)c)
			return (caststr + count);
		count++;
	}
	return (NULL);
}
