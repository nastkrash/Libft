/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:34:36 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/02 23:31:45 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (n != 0 && (n * size) / n != size)
		return (NULL);
	ptr = malloc(n * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, n * size);
	return (ptr);
}
// int main() {
//     size_t num_elements = 5;
//     size_t element_size = sizeof(int);

//     int *arr = (int *)ft_calloc(num_elements, element_size);

//     if (!arr) {
//         printf("Memory allocation failed!\n");
//         return (1);
//     }

//     printf("Allocated array values: ");
//     printf("%d ", arr[0]);
//     printf("%d ", arr[1]);
//     printf("%d ", arr[2]);
//     printf("%d ", arr[3]);
//     printf("%d ", arr[4]);
//     printf("\n");

//     return (0);
// }