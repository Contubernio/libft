/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albealva <albealva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:30:06 by albealva          #+#    #+#             */
/*   Updated: 2024/01/15 18:30:06 by albealva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}

/*
int main()
{
	int *arr;
	size_t count = 5;
	size_t size = sizeof(int);

	arr = (int *)ft_calloc(count, size);
    if (arr == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
    }
    for (size_t i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);

    return (0);
}
*/