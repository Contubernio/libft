/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:21:28 by albealva          #+#    #+#             */
/*   Updated: 2024/01/25 12:33:28 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (c);
	return (0);
}

/*
int	main(void)
{
	char	ch;
	int		result;

	printf("Enter a character: ");
	scanf("%c", &ch);
	result = ft_isalpha((int)ch);
	if (result)
		printf("The character '%c' is alphabetical.\n", ch);
	else
		printf("The character '%c' is not alphabetical.\n", ch);
	return (0);
}
*/