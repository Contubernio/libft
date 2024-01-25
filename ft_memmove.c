/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:30:26 by albealva          #+#    #+#             */
/*   Updated: 2024/01/25 18:48:14 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	if (!dst && !src)
		return (0);
	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d >= s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

/*int	main(void)
{
	char	ori[7] = "Holaaa";
	char	dest[6] = "12345";
	
	ft_memmove(dest, ori, 7);
	printf("%s",dest);
	return (0);
	
}
*/
//DESCRIPTION
// The memmove() function copies len bytes from string src 
//to string dst.  The two strings may overlap; the copy is always 
//done in a non-destructive manner.