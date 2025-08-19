/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:38:16 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/02 23:36:10 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	char		*dest;
	const char	*src;
	size_t		i;

	if (!dest_str || !src_str)
		return (dest_str);
	i = 0;
	dest = (char *)dest_str;
	src = (const char *)src_str;
	if (n == 0)
		return (dest_str);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest_str);
}

// int main()
// {
//     char src[50] = "Hello, World!";
//     char dest[50];
//     ft_memcpy(dest, src, ft_strlen(src) + 1);
//     printf("Destination after memcpy: %s\n", dest);
//     return (0);
// }