/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:09:22 by albealva          #+#    #+#             */
/*   Updated: 2024/01/25 16:15:58 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *src, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (src);
	while (src[i] != '\0')
	{
		j = 0;
		while (src[i + j] != '\0' && src[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&src[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	haystack[] = "This is a simple string";
	char	needle[] = "simple";
	char	*result = ft_strstr(haystack, needle);
	if (result != NULL)
	{
		printf("Substring found: %s\n", result);
	}
	else
	{
		printf("Substring not found.\n");
	}
	return (0);
}
*/