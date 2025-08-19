/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:27:56 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/02 22:35:27 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	if (!big || !little)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	little_len = ft_strlen(little);
	while (*big && little_len <= len)
	{
		if (*big == *little && ft_strncmp(big, little, little_len) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}

// int main()
// {
//     const char *big = "Hello, World!";
//     const char *little = "World";
//     char *result = ft_strnstr(big, little, 12);
//     if (result)
//         printf("Found: %s\n", result);
//     else
//         printf("Not found\n");
//     return (0);
// }