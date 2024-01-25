/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:44:09 by albealva          #+#    #+#             */
/*   Updated: 2024/01/25 16:43:15 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}

/*
int	main(void)
{
	char	*str1 = "Hello, World!";
    char	*str2 = "Hello, World!";
	char	*str3 = "Hello, there!";

	printf("Comparing '%s' and '%s': %d\n", str1, str2, ft_strncmp(str1, str2, 5));
	printf("Comparing '%s' and '%s': %d\n", str1, str3, ft_strncmp(str1, str3, 5));
	printf("Comparing '%s' and '%s': %d\n", str1, str3, ft_strncmp(str1, str3, 7));
	return (0);
}
*/