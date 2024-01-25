/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:28:56 by albealva          #+#    #+#             */
/*   Updated: 2024/01/25 12:29:29 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (c);
	return (0);
}

/*
int	main(void)
{
	char	input;
	int		result;

	printf("Enter a single character: ");
	scanf(" %c", &input);
	result = ft_isalnum((int)input);
	if (result)
		printf("'%c' is alphanumeric.\n", input);
	else
		printf("'%c' is not alphanumeric.\n", input);
	return (0);
}
*/