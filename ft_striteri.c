/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:42:42 by albealva          #+#    #+#             */
/*   Updated: 2024/01/23 20:29:58 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
A cada carácter de la string ’s’, aplica la función
’f’ dando como parámetros el índice de cada
carácter dentro de ’s’ y la dirección del propio
carácter, que podrá modificarse si es necesario.
*/
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			f(i, s + i);
			i++;
		}
	}
}

/*
void	print_char_with_index(unsigned int i, char *s)
{
	printf("En la posición %u está el carácter '%c'.\n", i, *s);
}

int	main(void)
{
	char	*str;

	str = "Ejemplo";
	ft_striteri(str, print_char_with_index);
	return (0);
}
*/