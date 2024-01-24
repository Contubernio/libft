/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:38:53 by albealva          #+#    #+#             */
/*   Updated: 2024/01/24 16:44:32 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pstr;

	pstr = b;
	while (len--)
	{
		*pstr++ = (unsigned char) c;
	}
	return (b);
}
/*the function put the N 1st bytes from memory block
pointing by STR to C In the code we use de PTR to run
the memory block and put every byte to C*/