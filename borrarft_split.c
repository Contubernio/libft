/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   borrarft_split.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:55:16 by albealva          #+#    #+#             */
/*   Updated: 2024/01/17 19:08:17 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;
	int	cword;
	int clet;

	i = 0;
	clet = 0;
	cword = 0;
	while (s[i] != '\0')
	{
		if (s[0] != c)
		{
			clet++;
			i++;
		}
		else
			i++;
		while (s[i] != c && s[i - 1] != c && s[i] != '\0')
		{
			clet++;
			i++;
		}
		if (s[i - 1] != c)
			cword++;
		clet = 0;
	}
	return (cword);
}

int	main(int argc, char **argv)
{
	int	res;

	(void)argc;
	res = ft_count_words(argv[1], argv[2][0]);

	printf("%d\n", res);
}

