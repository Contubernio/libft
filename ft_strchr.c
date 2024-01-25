/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:15:38 by albealva          #+#    #+#             */
/*   Updated: 2024/01/25 18:09:01 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*mstr;

	mstr = (unsigned char *)s;
	while (*mstr != (unsigned char)c)
	{
		if (*mstr == '\0')
			return (NULL);
		mstr++;
	}
	return ((char *)mstr);
}

/*
int	main(void)
{
	const char	*str = "Hello, world!";
	int			character_to_find = 'o';
	char 		*result;

	result = ft_strchr(str, character_to_find);
	if (result)
		printf("Character '%c' found at position: %s\n",
		 character_to_find, result);
	else
		printf("Character '%c' not found in the string.\n", 
		character_to_find);
	return (0);
}
*/
/*
DESCRIPTION
     The strchr() function locates the first occurrence of c (converted to a
     char) in the string pointed to by s.  The terminating null character is
     considered to be part of the string; therefore if c is `\0', the func-
     tions locate the terminating `\0'.

     The strrchr() function is identical to strchr(), except it locates the
     last occurrence of c.

RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located
     character, or NULL if the character does not appear in the string.
*/