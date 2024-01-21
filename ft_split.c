/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:55:16 by albealva          #+#    #+#             */
/*   Updated: 2024/01/19 11:51:00 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	*ft_count_words(char const *s, char c)
{
	int	i;
	int	j;
	int	*count;

	i = 0;
	j = 1;
	count[i] = 0;
	while (s[i] != '\0')
	{
		if (s[0] != c)
		{
			count[j]++;
			i++;
		}
		else
			i++;
		while (s[i] != c && s[i - 1] != c && s[i])
		{
			count[j]++;
			i++;
		}
		if (s[i - 1] != c)
			count[0]++;
		j++;
		count[j] = 0;
	}
	return (count);
}
/*
int	main(int argc, char **argv)
{
	int	*res;
	int	i;

	i = 0;
	(void)argc;
	res = ft_count_words(argv[1], argv[2][0]);

	printf("%d\n", res[0]);
	printf("%d\n", res[1]);
	printf("%d\n", res[2]);
	printf("%d\n", res[3]);
}

*/