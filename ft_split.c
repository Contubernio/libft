/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:55:16 by albealva          #+#    #+#             */
/*   Updated: 2024/01/22 19:54:21 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
#include <stdio.h>
#include <stdlib.h>

static void	ft_strncpy(char *dst, const char *src, size_t n)
{
	while (n > 0 && *src != '\0')
	{
		*dst++ = *src++;
		n--;
	}
	if (n > 0)
	{
		while (n-- > 0)
			*dst++ = '\0';
	}
}

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	cword;

	i = 0;
	cword = 0;
	if (!s || s[0] == '\0')
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


static void	ft_find_word_positions(char const *s, char c, int *point)
{
	int	i;
	int	j;
	int	in_word;

	i = 0;
	j = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && in_word == 0)
		{
			point[j++] = i;
			in_word = 1;
		}
		else if (s[i] == c && in_word == 1)
		{
			point[j++] = i - 1;
			in_word = 0;
		}
		i++;
	}
	if (in_word)
	{
		point[j] = i - 1;
	}
}

static void	*ft_malloc(size_t size)
{
	void	*mem;
	size_t	i;

	i = 0;
	mem = malloc(size);
	if (!mem)
		return (NULL);
	while (i < size)
	{
		((unsigned char *)mem)[i] = 0;
		i++;
	}
	return (mem);
}

int	main(int argc, char **argv)
{
	int	res;
	int	*reslet;
	int	i;

	if (argc != 3)
	{
		fprintf(stderr, "Error: debe proporcionar dos argumentos.\n");
		fprintf(stderr, "Uso: %s <cadena> <delimitador>\n", argv[0]);
		return (1);
	}
	res = ft_count_words(argv[1], argv[2][0]);
	//reslet = ft_malloc(sizeof(int) * res);
	reslet = ft_malloc(sizeof(int) * ((res * 2) + 1));
	if (!reslet)
	{
		fprintf(stderr, "Error al asignar memoria.\n");
		return (2);
	}
	ft_find_word_positions(argv[1], argv[2][0], reslet);
	i = 0;
	while (reslet[i])
	{
		printf("Longitud de la palabra %d es: %d\n", i + 1, reslet[i]);
		i++;
	}
	free(reslet); // No olvides liberar la memoria asignada
	return (0);
}