/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:37:02 by albealva          #+#    #+#             */
/*   Updated: 2024/01/15 18:37:02 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_val_substr(char const *s, unsigned int start, size_t len)
{
	size_t	strlen;

	strlen = ft_strlen(s);
	if (start >= strlen)
		return (0);
	if (len > strlen - start)
		len = strlen - start;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s)
		return (NULL);
	len = ft_val_substr(s, start, len);
	if (len == 0)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = start;
	j = 0;
	while (j < len)
	{
		str[j++] = s[i++];
	}
	str[j] = '\0';
	return (str);
}

/*char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;
	size_t	strlen;

	strlen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= strlen)
		return (ft_strdup(""));
	if (len > strlen - start)
		len = strlen - start;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
*/

/*
int main(int argc, char *argv[])
{
    char *str;
    unsigned int start;
    size_t len;

    if (argc != 4) {
        printf("Usage: %s <string> <start> <length>\n", argv[0]);
        return 1;
    }

    start = (unsigned int)atoi(argv[2]); 
    len = (size_t)atoi(argv[3]);        

    // Llama a ft_substr y guarda el resultado
    str = ft_substr(argv[1], start, len);
    if (str) {
        printf("Substr: '%s'\n", str);
        free(str); // No olvides liberar la memoria
    } else {
        printf("Error: ft_substr returned NULL.\n");
    }

    return 0;
}
*/