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

static size_t	w_size(char const *s, int start, char c)
{
	size_t	size;

	size = 0;
	while (s[start] && s[start] != c)
	{
		size++;
		start++;
	}
	return (size);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	words;
	int	flag;

	i = 0;
	words = 0;
	flag = 0;
	while (s[i])
	{
		if (s[i] != c && flag == 0)
		{
			words++;
			flag = 1;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (words);
}

static char	**error_free(char **str, int count)
{
	while (count >= 0)
	{
		free(str[count]);
		count--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**str;

	str = malloc((sizeof (char *)) * (count_words(s, c) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (j < count_words(s, c))
	{
		while (s[i] == c)
			i++;
		str[j] = ft_substr(s, i, w_size(s, i, c));
		if (!str[j])
			return (error_free(str, j));
		j++;
		i += w_size(s, i, c);
	}
	str[j] = 0;
	return (str);
}

/*
int	main(int argc, char **argv)
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