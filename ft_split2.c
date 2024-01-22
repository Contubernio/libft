/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:12:53 by albealva          #+#    #+#             */
/*   Updated: 2024/01/22 20:29:07 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


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
char **ft_split(char const *s, char c)
{
    int	*positions;
    int	word_count;
    char	**split;
    int	i;
    int	start;
    int	end;
    int	len;
    int	j;

    if (!s)
        return (NULL);

    word_count = ft_count_words(s, c);
    positions = (int *)ft_malloc(sizeof(int) * (word_count * 2));
    if (!positions)
        return (NULL);

    ft_find_word_positions(s, c, positions);
    split = (char **)ft_malloc(sizeof(char *) * (word_count + 1));
    if (!split)
    {
        free(positions);
        return (NULL);
    }

    for (i = 0; i < word_count; i++)
    {
        start = positions[i * 2];
        end = positions[i * 2 + 1];
        len = end - start + 1;
        split[i] = (char *)ft_malloc(sizeof(char) * (len + 1));
        if (!split[i])
        {
            while (i-- > 0)
                free(split[i]);
            free(split);
            free(positions);
            return (NULL);
        }
        j = 0;
        while (start <= end)
            split[i][j++] = s[start++];
        split[i][j] = '\0';
    }
    split[word_count] = NULL;
    free(positions);
    return (split);
}

int	main(int argc, char **argv)
{
	char	**words;
	int		i;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s string delimiter\n", argv[0]);
		return (1);
	}
	words = ft_split(argv[1], argv[2][0]);
	if (words)
	{
		for (i = 0; words[i] != NULL; ++i)
		{
			printf("Word %d: %s\n", i + 1, words[i]);
			free(words[i]); // Liberamos cada palabra individualmente
		}
		free(words); // Finalmente liberamos el array
	}
	return (0);
}