/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:22:18 by albealva          #+#    #+#             */
/*   Updated: 2024/01/25 16:13:26 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*final_pos;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (unsigned char)c)
		{
			final_pos = (char *)&s[len];
			return (final_pos);
		}
		len--;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char	*s = "Example sentence with multiple e characters.";
	int			c = 'e';
	char		*result = ft_strrchr(s, c);

	if (result)
	{
		printf("Last occurrence: '%s'\n", result);
	}
	else
	{
		printf("Character not found.\n");
	}
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