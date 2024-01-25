/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:44:09 by albealva          #+#    #+#             */
/*   Updated: 2024/01/25 18:27:01 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < (n - 1) && s1[i] == s2[i])
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

/*
int	main(void)
{
	char	*str1 = "Hello, World!";
    char	*str2 = "Hello, World!";
	char	*str3 = "Hello, there!";

	printf("Comparing '%s' and '%s': %d\n", str1, str2, 
	ft_strncmp(str1, str2, 5));
	printf("Comparing '%s' and '%s': %d\n", str1, str3, 
	ft_strncmp(str1, str3, 5));
	printf("Comparing '%s' and '%s': %d\n", str1, str3, 
	ft_strncmp(str1, str3, 7));
	return (0);
}
*/