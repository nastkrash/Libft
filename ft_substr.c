/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 23:10:08 by nicolasg          #+#    #+#             */
/*   Updated: 2024/10/03 12:23:05 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	s_len;
	size_t	j;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len || len == 0)
	{
		result = malloc(1 * sizeof(char));
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	if (len > s_len - start)
		len = s_len - start;
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	j = 0;
	while (j < len)
		result[j++] = s[start++];
	result[j] = '\0';
	return (result);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*sub_str;

// 	str = "Hello, world!";
// 	sub_str = ft_substr(str, 7, 5);
// 	if (sub_str)
// 	{
// 		printf("Test 1: %s\n", sub_str);
// 		free(sub_str);
// 	}
// 	sub_str = ft_substr(str, 20, 5);
// 	if (sub_str)
// 	{
// 		printf("Test 2: '%s'\n", sub_str);
// 		free(sub_str);
// 	}
// 	sub_str = ft_substr(str, 7, 20);
// 	if (sub_str)
// 	{
// 		printf("Test 3: %s\n", sub_str);
// 		free(sub_str);
// 	}
// 	sub_str = ft_substr("", 0, 5);
// 	if (sub_str)
// 	{
// 		printf("Test 4: '%s'\n", sub_str);
// 		free(sub_str);
// 	}
// 	sub_str = ft_substr(NULL, 0, 5);
// 	if (sub_str == NULL)
// 	{
// 		printf("Test 5: NULL\n");
// 	}
//     sub_str = ft_substr("Hello, world!", 5, 0);
//     if (sub_str)
//     {
//         printf("Test 6: '%s'\n", sub_str);
//         free(sub_str);
//     }
// 	return (0);
// }
