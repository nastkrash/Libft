/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 22:29:03 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/03 21:24:51 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest_str, const void *src_str, size_t n)
{
	char		*dest;
	const char	*src;

	dest = (char *)dest_str;
	src = (const char *)src_str;
	if (n == 0 || dest == src)
		return (dest);
	if (!dest || !src)
		return (NULL);
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			dest[n] = src[n];
		}
	}
	else
		return (ft_memcpy(dest_str, src_str, n));
	return (dest_str);
}
// int	main(void)
// {
// 	char src[50] = "Hello, World!";
// 	ft_memmove(src + 7, src, 13);
// 	printf("After memmove: %s\n", src);
// 	return (0);
// }