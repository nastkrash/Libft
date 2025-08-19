/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:10:39 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/03 16:17:26 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>

int	ft_memcmp(const void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!dest || !src)
		return (0);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (d[i] != s[i])
			return (d[i] - s[i]);
		i++;
	}
	return (0);
}

// int main()
// {
//     char str1[] = "abcdef";
//     char str2[] = "abcdef";
//     printf("Test 1: %d (expected 0)\n", ft_memcmp(str1, str2, 6));
//     char str3[] = "abcdeg";
//     printf("Test 2: %d (expected 0)\n", ft_memcmp(NULL, str3, 6));
//     printf("Test 3: %d (expected 0)\n", ft_memcmp(str1, NULL, 5));
//     printf("Test 4: %d (expected 0)\n", ft_memcmp(NULL, NULL, 0));
//     return (0);
// }