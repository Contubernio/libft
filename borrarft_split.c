/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   borrarft_split.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:55:16 by albealva          #+#    #+#             */
/*   Updated: 2024/01/22 18:46:26 by albealva         ###   ########.fr       */
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

static int	*ft_count_let(char const *s, char c, int *point)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s[0] == '\0')
		return (0);
	if (s[0] != c)
		point[j] = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			point[j]++;
		i++;
		j++;
	}
	return (point);
}

static char	*ft_malloc1(int words)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * words + 1);
	if (!str)
		return (NULL);
	return (str);
}

static int	*ft_malloc2(int words)
{
	int	*num;

	num = (int *)malloc(sizeof(int) * words * 2);
	if (!num)
		return (NULL);
	return (num);
}

int	main(int argc, char **argv)
{
	int		res;
	int		*res2;
	char	*res1;
	int		*reslet;

	if (argc != 3)
	{
		fprintf(stderr, "Error: debe proporcionar dos argumentos.\n");
		fprintf(stderr, "Uso: %s <cadena> <delimitador>\n", argv[0]);
		return (1);
	}
	res = ft_count_words(argv[1], argv[2][0]);
	res1 = ft_malloc1(res);
	printf("La cantidad de palabras es: %d\n", res);
	res2 = ft_malloc1(res);
	reslet = ft_count_let(argv[1], argv[2][0], res2);
	while (reslet)
		printf("La cantidad de palabras es: %d\n", reslet);
	return (0);
}
