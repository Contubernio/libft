/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:48:58 by albealva          #+#    #+#             */
/*   Updated: 2024/01/25 12:52:33 by albealva         ###   ########.fr       */
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

/*
int	main(void)
{
	const char	*str = "Hello, world!";
	char		target;
	char		*result;

	printf("Enter a character to find: ");
	scanf("%c", &target);
	result = ft_memchr(str, target, 13);
	if (result != NULL)
	{
		printf("Character '%c' found at position: %ld\n", *result, result - str);
	}
	else
	{
	printf("Character '%c' not found in the string.\n", target);
	}
	return (0);
}
*/