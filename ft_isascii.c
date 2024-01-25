/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:34:59 by albealva          #+#    #+#             */
/*   Updated: 2024/01/25 12:37:36 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
int	main(void)
{
	unsigned char	ch;
	int				result;

	printf("Enter a character: ");
	scanf("%c", &ch);
	result = ft_isascii(ch);
	printf("The character '%c' is %s.\n", ch, result ? "ASCII" : "not ASCII");
	return (0);
}
*/