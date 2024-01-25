/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:31:32 by albealva          #+#    #+#             */
/*   Updated: 2024/01/15 18:31:32 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)

{
	unsigned const char	*t1;
	unsigned const char	*t2;

	t1 = (unsigned const char *)s1;
	t2 = (unsigned const char *)s2;
	while (n)
	{
		if (*t1 != *t2)
			return (*t1 - *t2);
		t1++;
		t2++;
		n--;
	}
	return (0);
}

/*
int	main(void)
{
	const char *str1 = "Hello World";
    const char *str2 = "Hello world";
    int result;

    result = ft_memcmp(str1, str2, 11);
    if(result > 0) {
        printf("String 1 is greater than string 2.\n");
    } else if(result < 0) {
        printf("String 2 is greater than string 1.\n");
    } else {
        printf("String 1 is equal to string 2.\n");
    }
    return (0);
}
*/
/*
SYNOPSIS
       #include <string.h>

       int memcmp(const void *s1, const void *s2, size_t n);

DESCRIPTION
       The  memcmp()  function  compares the first n bytes (each interpreted
	    as unsigned char) of the memory areas s1
       and s2.

RETURN VALUE
       The memcmp() function returns an integer less than, equal to, or 
	   greater than zero if the first n bytes of  s1
       is found, respectively, to be less than, to match, or be greater 
	   than the first n bytes of s2.

       For  a  nonzero  return  value, the sign is determined by the sign of 
	   the difference between the first pair of
       bytes (interpreted as unsigned char) that differ in s1 and s2.

       If n is zero, the return value is zero.
*/