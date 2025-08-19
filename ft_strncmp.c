/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:10:39 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/03 22:29:38 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (s1 == NULL || s2 == NULL || n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0' || s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
// int main() {
//     char *str1 = "Hello";
//     char *str2 = "Hello, World!";
//     char *str3 = NULL;
//     char *str4 = "Hellx";

//     printf("Compare str1 and str2 (n = 5): %d\n", ft_strncmp(str1, str2, 5));
//     printf("Compare str1 and str4 (n = 4): %d\n", ft_strncmp(str1, str4, 4));
//     printf("Compare str1 and str4 (n = 5): %d\n", ft_strncmp(str1, str4, 5));
//     printf("Compare str1 and str3 (n = 5): %d\n", ft_strncmp(str1, str3, 5));
//     printf("Compare str3 and str2 (n = 5): %d\n", ft_strncmp(str3, str2, 5));
//     printf("Compare str3 and str3 (n = 5): %d\n", ft_strncmp(str3, str3, 5));

//     return (0);
// }