/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:43:47 by albealva          #+#    #+#             */
/*   Updated: 2024/01/22 20:52:15 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void    *ft_malloc(size_t size)
{
    void    *mem;

    mem = malloc(size);
    if (!mem)
        return (NULL);
    return (mem);
}

int ft_count_words(const char *str, char delimiter)
{
    int count;
    int in_word;
    int i;

    count = 0;
    in_word = 0;
    i = 0;
    while (str[i])
    {
    if (str[i] != delimiter && in_word == 0)
    {
        in_word = 1;
        count++;
    }
    else if (str[i] == delimiter)
    {
        in_word = 0;
    }
    i++;
    }
    return (count);
}

void    ft_strcpy(char *dst, const char *src, int start, int finish)
{
    while (start <= finish)
    {
        *dst++ = src[start++];
    }
    *dst = '\0';
}

char    **ft_split(char const *s, char c) {
    int i
    int j
    int count
    int start;
    char    **result;

    count = ft_count_words(s, c);
    result = (char **)ft_malloc(sizeof(char *) * (count + 1));
    if (!result)
        return (NULL);

    i = 0;
    j = 0;
    start = -1;
    while (s[i])
    {
        if (s[i] != c && start < 0)
            start = i;
        if ((s[i] == c || s[i + 1] == '\0') && start >= 0) {
            result[j] = (char *)ft_malloc(sizeof(char) * (i - start + 1 + (s[i + 1] == '\0' ? 1 : 0)));
            if (!result[j]) {
                while (j--)
                    free(result[j]);
                free(result);
                return (NULL);
            }
            ft_strcpy(result[j], s, start, s[i + 1] == '\0' ? i : i - 1);
            j++;
            start = -1;
        }
        i++;
    }
    result[count] = NULL;
    return (result);
}

int     main(int argc, char **argv) {
    char    **words;
    int     i;

    if (argc != 3) {
        fprintf(stderr, "Usage: %s string delimiter\n", argv[0]);
        return (1);
    }
    words = ft_split(argv[1], argv[2][0]);
    if (words) {
        i = 0;
        while (words[i]) {
            printf("Word %d: %s\n", i + 1, words[i]);
            free(words[i]);
            i++;
        }
        free(words);
    }
    return (0);
}