/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:38:53 by albealva          #+#    #+#             */
/*   Updated: 2024/01/19 14:46:42 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pstr;

	pstr = b;
	while (len--)
	{
		*pstr++ = (unsigned char) c;
	}
	return (b);
}

//la funcion memset establece los primeros N bytes 
//del bloque de memoria apuntados por STR a C.
//En el c'odigo se usa el puntero pstr para recorrer 
//el bloque de memoria y establecer cda byte
// a C. L afunci'on devuelve un puntero al bloque de memoria.