/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:38:53 by albealva          #+#    #+#             */
/*   Updated: 2024/01/25 13:44:15 by albealva         ###   ########.fr       */
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

/*
int	main(void)
{
    char	str[50] = "Hello World!";

    printf("Before ft_memset: %s\n", str);
	ft_memset(str, '*', 5);
	printf("After ft_memset: %s\n", str);
    return (0);
}
*/
/*the function put the N 1st bytes from memory block
pointing by STR to C In the code we use de PTR to run
the memory block and put every byte to C*/