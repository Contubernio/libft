/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:26:47 by albealva          #+#    #+#             */
/*   Updated: 2024/01/25 12:42:17 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (c);
	return (0);
}

/*
int	main(void)
{
	unsigned char	ch;
	int				result;

	printf("Enter a character: ");
	scanf("%c", &ch);
	result = ft_isdigit(ch);
	printf("The character '%c' is %s.\n", ch, result ? "a digit" : "not a digit");
	return (0);
}
*/