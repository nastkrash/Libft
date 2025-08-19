/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakrash <anakrash@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:56:24 by anakrash          #+#    #+#             */
/*   Updated: 2024/10/03 12:40:43 by anakrash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_join_strings(char const *s1, char const *s2, char *res)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		res[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		res[j] = s2[i];
		i++;
		j++;
	}
	res[j] = '\0';
	return (res);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	res = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	res = ft_join_strings(s1, s2, res);
	return (res);
}

// int	main(void)
// {
// 	char	*result;

// 	result = ft_strjoin("Hello, ", "World!");
// 	if (result)
// 	{
// 		printf("Test 1: %s\n", result);
// 		free(result);
// 	}
// 	result = ft_strjoin(NULL, "World!");
// 	if (result)
// 	{
// 		printf("Test 2: %s\n", result);
// 		free(result);
// 	}
// 	result = ft_strjoin("Hello, ", NULL);
// 	if (result)
// 	{
// 		printf("Test 3: %s\n", result);
// 		free(result);
// 	}
// 	result = ft_strjoin(NULL, NULL);
// 	if (result)
// 	{
// 		printf("Test 4: '%s'\n", result);
// 		free(result);
// 	}
// 	result = ft_strjoin("", "");
// 	if (result)
// 	{
// 		printf("Test 5: '%s'\n", result);
// 		free(result);
// 	}
// 	result = ft_strjoin("Hello", "");
// 	if (result)
// 	{
// 		printf("Test 6: '%s'\n", result);
// 		free(result);
// 	}
// 	return (0);
// }
