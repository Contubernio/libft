/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:46:35 by albealva          #+#    #+#             */
/*   Updated: 2024/01/23 18:52:43 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	size_t	len;

	(void)argc;
	len = ft_strlen(argv[1]);
	printf("%ld\n",len);
	return (0);
}
