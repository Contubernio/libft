/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:56:02 by albealva          #+#    #+#             */
/*   Updated: 2024/01/19 17:50:23 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		n = -n;
	if (n >= 10)
	{
		ft_intlen(n / 10);
		ft_intlen(n % 10);
		i++;
	}
	else
		i++;
	return (i);
}

static char	*ft_putnbr(int n, char *str)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, str);
		ft_putnbr(n % 10, str);
	}
	else
	{
		i++;
		str[i] = (n + '0');
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_intlen(n);
	if (n < 0)
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	str = ft_putnbr(n, str);
	return (str);
}

int	main(void)
{
	char	*res;

	res = ft_itoa(-122536);
	printf("%s\n",res);
	free(res);
	return (0);
}
