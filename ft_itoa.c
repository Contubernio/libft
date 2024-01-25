/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:56:02 by albealva          #+#    #+#             */
/*   Updated: 2024/01/25 13:46:13 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = -n;
		i = 2;
	}
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_ptnbrmem(int n, char *str)
{
	int	len;
	int	i;	

	i = 1;
	len = ft_len(n);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		n = n * -1;
	}
	while (n > 0)
	{
		str[len - i] = '0' + (n % 10);
		n = n / 10;
		i++;
	}
	str[len] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	char	*res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	res = ft_ptnbrmem(n, str);
	return (res);
}

/*int	main(void)
{
	char	*str;

	str = ft_itoa(121225550);
	printf("%s\n",str);
}*/