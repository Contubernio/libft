/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   borrarft_split.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:55:16 by albealva          #+#    #+#             */
/*   Updated: 2024/01/22 12:33:45 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	cword;

	i = 0;
	cword = 0;
	if (s[0] == '\0')
		return (0);
	if (s[0] != c)
		cword = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			cword++;
		i++;
	}
	return (cword);
}

int	main(int argc, char **argv)
{
	int	res;

	if (argc != 3)
	{
		fprintf(stderr, "Error: debe proporcionar dos argumentos.\n");
		fprintf(stderr, "Uso: %s <cadena> <delimitador>\n", argv[0]);
		return (1);
	}
	res = ft_count_words(argv[1], argv[2][0]);
	printf("La cantidad de palabras es: %d\n", res);
	return (0);
}