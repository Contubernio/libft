/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:38:53 by albealva          #+#    #+#             */
/*   Updated: 2024/01/09 11:55:04 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, unsigned long n)

{
	unsigned char	*pstr;

	pstr = str;
	while (n--)
	{
		*pstr++ = (unsigned char) c;
	}
	return (str);
}

//la funcion memset establece los primeros N bytes 
//del bloque de memoria apuntados por STR a C.
//En el c'odigo se usa el puntero pstr para recorrer 
//el bloque de memoria y establecer cda byte
// a C. L afunci'on devuelve un puntero al bloque de memoria.