/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:32:03 by albealva          #+#    #+#             */
/*   Updated: 2024/01/23 15:04:11 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Aplica la función f a cada carácter de la cadena pasada
como argumento dando su índice como primer argumento para crear un
Nueva cadena “fresca” (con malloc(3)) resultante de las sucesivas
aplicaciones de f.
Parám. #1 La cadena a mapear.
Parám. #2 La función a aplicar a cada carácter de s y su índice.
Valor de retorno La cadena "nueva" creada a partir de las 
sucesivas aplicaciones de f.
Funciones libc malloc(3)*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char increment_char(unsigned int i, char c)
{
	if (c != '\0')
		c++;
	return (c);
}

int main(void)
{
    char const *s = "Hello World!";
    char *modified_str;

    modified_str = ft_strmapi(s, increment_char);

    if (modified_str == NULL)
    {
        printf("Failed to allocate memory for 'modified_str'\n");
        return 1;
    }
    
    printf("Original string: %s\n", s);
    printf("Modified string: %s\n", modified_str);

    free(modified_str);
    return 0;
}