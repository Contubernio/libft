/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:36:41 by albealva          #+#    #+#             */
/*   Updated: 2024/01/25 18:08:16 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	result = ft_isprint(ch);
	printf("The character '%c' is %s.\n", ch, 
	result ? "printable" : "not printable");
	return (0);
}
*/