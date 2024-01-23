/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:12:53 by albealva          #+#    #+#             */
/*   Updated: 2024/01/23 19:32:09 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>


static void	*ft_malloc(size_t size)
{
	void	*mem;

	mem = malloc(size);
	if (!mem)
		return (NULL);
	return (mem);
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

static char	**ft_free_split(char **split)
{
	int	i;

	if (split)
	{
		i = 0;
		while (split[i])
		{
			free(split[i]);
			i++;
		}
		free(split);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		*positions;
	int		word_count;
	char	**split;
	int		i;

	word_count = ft_count_words(s, c);
	split = (char **)ft_malloc(sizeof(char *) * (word_count + 1));
	if (!split)
		return (NULL);
	positions = (int *)ft_malloc(sizeof(int) * word_count * 2);
	if (!positions)
		return (ft_free_split(split));
	ft_find_word_positions(s, c, positions);
	i = 0;
	while (i < word_count)
	{
		split[i] = ft_substr(s, (unsigned int)positions[i * 2],
				(size_t)(positions[i * 2 + 1] - positions[i * 2] + 1));
		if (!split[i])
			return (ft_free_split(split));
		i++;
	}
	split[word_count] = NULL;
	free(positions);
	return (split);
}

/*int	main(int argc, char **argv)
{
	char	**words;

	if (argc == 3)
	{
		words = ft_split(argv[1], argv[2][0]);
		if (words)
		{
			for (int i = 0; words[i] != NULL; i++)
			{
				printf("Palabra %d: %s\n", i, words[i]);
				free(words[i]);
			}
			free(words);
		}
	}
		else
		{
        	printf("Uso: %s <cadena> <delimitador>\n", argv[0]);
    	}
	return 0;
}
*/