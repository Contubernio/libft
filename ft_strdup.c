/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:31:56 by albealva          #+#    #+#             */
/*   Updated: 2024/01/15 18:31:56 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	if (!s1)
		return (NULL);
	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

/*
SYNOPSIS
       #include <string.h>

       char *strdup(const char *s);

       char *strndup(const char *s, size_t n);
       char *strdupa(const char *s);
       char *strndupa(const char *s, size_t n);

   Feature Test Macro Requirements for glibc (see feature_test_macros(7)):

       strdup():
           _XOPEN_SOURCE >= 500
               Since glibc 2.12:  _POSIX_C_SOURCE >= 200809L
                 Glibc versions <= 2.19:  _BSD_SOURCE  _SVID_SOURCE
       strndup():
           Since glibc 2.10:
               _POSIX_C_SOURCE >= 200809L
           Before glibc 2.10:
               _GNU_SOURCE
       strdupa(), strndupa(): _GNU_SOURCE

DESCRIPTION
       The  strdup() function returns a pointer to a new string which is a 
       duplicate of the string s.  Memory for the
       new string is obtained with malloc(3), and can be freed with free(3).

       The strndup() function is similar, but copies at most n bytes.  If s is 
        longer  than  n,  only  n  bytes  are
       copied, and a terminating null byte ('\0') is added.

       strdupa()  and strndupa() are similar, but use alloca(3) to allocate the 
       buffer.  They are available only when
       using the GNU GCC suite, and suffer from the same limitations described
        in alloca(3).

RETURN VALUE
       On success, the strdup() function returns a pointer to the duplicated 
       string.  It returns NULL if insufficient
       memory was available, with errno set to indicate the cause of the error.
*/